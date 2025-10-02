/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:47:09 by mspasic           #+#    #+#             */
/*   Updated: 2025/10/02 22:45:40 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

static bool spaces(const std::string& date){
	for (unsigned char c : date){
		if (std::isspace(c))
			return true;
	}
	return false;
}

//leap years
//if divisible by 400
//or if divisible by 4 but not 100
static bool isLeapYear(int year){
	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

static int getDate(const std::string& date){
	int year, month, day;

	if (spaces(date) == true)
		throw std::invalid_argument("bad input => " + date);

	if (sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day) != 3)
		throw std::invalid_argument("wrong date format => " + date);

	if ( 1 > year || 2025 < year)
		throw std::invalid_argument("year value invalid => " + date);

	if ( 1 > month || 12 < month)
		throw std::invalid_argument("month value invalid => " + date);

	if ( 1 > day || 31 < day)
		throw std::invalid_argument("day value invalid => " + date);

	// february during leap year
	if (month == 2){
		if ((day > 29) || (isLeapYear(year) == true && day > 29) || (isLeapYear(year) == false && day > 28))
			throw std::invalid_argument("date invalid => " + date);
	}

	if (day > 30 && (month == 4 || month == 6 || month == 9 || month == 11))
		throw std::invalid_argument("day value invalid => " + date);

	return (year * 10000 + month * 100 + day);
}


void BitcoinExchange::processFile(const std::string& input_file, unsigned char c, bool inputed){
	//checking whether the file exists and can be opened
	std::fstream data(input_file, std::ios::in);
	if (!data.is_open())
		throw std::ios_base::failure("could not open file => " + input_file);

	//set the first line
	std::string firstline_data = "date,exchange_rate";
	std::string firstline_input = "date | value";

	std::string date, rate, content, line;
	//reading from the file
	std::getline(data, line);
	if ((inputed == false && line != firstline_data) || (inputed == true && line != firstline_input))
		throw std::invalid_argument("invalid file content  => " + line);

	// address of an integer to store the number of characters processed
	std::size_t  int_addr = 0;
	int     date_conv;
	double  rate_conv;

	while(std::getline(data, line)){
		if (content.max_size() - line.size() > content.size()){
			content.append(line);
			auto pos = line.find(c);
			if (pos == std::string::npos){
				std::cout << "Error: bad input => " << line << "\n";
				continue;
			}
			if (inputed == false){
				date = line.substr(0, pos);
				rate = line.substr(pos + 1);
			}
			else{
				date = line.substr(0, pos - 1);
				rate = line.substr(pos + 2);
			}

			try{
				date_conv = getDate(date);
				rate_conv = std::stod(rate, &int_addr);
				if (int_addr != rate.length())
					throw std::invalid_argument("bad input => " + rate);
				//a valid rate value must be a positive number
				if  (rate_conv < 0)
					throw std::invalid_argument("not a positive number.");
				if (inputed == false)
					rates[date_conv] = rate_conv;
				else{
					//a valid rate value must be between 0 and 1000
					if (rate_conv > 1000)
						throw std::invalid_argument("too large a number.");
					// returns an iter to the first element whose key is >= value
					auto rate_year = rates.lower_bound(date_conv);
					//1st case: exact match was found
					if (rate_year != rates.end() && rate_year->first == date_conv){
						std::cout << date << " => " << rate << " = " << rate_year->second * rate_conv << "\n";
						continue;
					}
					//2nd case: no exact match, but earlier date exists
					else if (rate_year != rates.begin()){
						rate_year--;
						std::cout << date << " => " << rate << " = " << rate_year->second * rate_conv << "\n";
						continue;
					}
					else{
						throw std::out_of_range("rate unavailable for date => " + date);
					}
				}
			} catch (std::exception& e){
				std::cout << "Error: " << e.what() << std::endl;
			}
		}
		else{
			throw std::invalid_argument("file invalid");
		}
	}
	data.close();
}
