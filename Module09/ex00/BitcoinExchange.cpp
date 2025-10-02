/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:47:09 by mspasic           #+#    #+#             */
/*   Updated: 2025/10/02 08:26:12 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj){}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj){}

bool spaces(const std::string& date){
    for (unsigned char c : date){
        if (std::isspace(c))
            return true;
    }
    return false;
}

//leap years 
//if divisible by 400
//or if divisible by 4 but not 100
bool isLeapYear(int year){
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

int BitcoinExchange::getDate(const std::string& date){
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
        if ((day > 29) || (isLeapYear(year) == true && day > 30) || (isLeapYear(year) == false && day > 29))
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
        throw std::ios_base::failure("could not open file");

    //set the first line
    std::string firstline;
    if (inputed == false)  {
        firstline = "date" + c;
        firstline += "value";    
    }
    else{
        firstline = "date " + c;
        firstline += " value";
    }

    //DELETE THIS
    std::cout << "Firstline is: " << firstline << "\n";

    //reading from the file
    std::string line;
    std::getline(data, line);
    if (line != firstline)
        throw std::invalid_argument("invalid file content  => " + line);

    std::string date;
    std::string rate;
    std::string content;
    // address of an integer to store the number of characters processed
    std::size_t  int_addr = 0;
    int     date_conv;
    double  rate_conv;

    while(std::getline(data, line)){
        if (content.max_size() - line.size() > content.size()){
            content.append(line);
            auto pos = line.find(c);
            if (pos == std::string::npos)
                throw std::invalid_argument("bad input => " + line);
            if (inputed == false){
                date = line.substr(0, pos);
                rate = line.substr(pos + 1);
            }
            else{
                date = line.substr(0, pos - 1);
                rate = line.substr(pos + 2);    
            }
            //DELETE THIS
            std::cout << "Rate: " << rate << std::endl;
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
                    //uporedi date, izracunaj rate, isprintaj
                    //a valid rate value must be between 0 and 1000
                    if (rate_conv > 1000)
                        throw std::invalid_argument("too large a number.");
                    // returns an iter to the first element whose key is >= value
                    auto rate_year = rates.lower_bound(date_conv);
                    //1st case: exact match was found
                    if (rate_year != rates.end() && rate_year->first == date_conv){
                        std::cout << date << " => " << rate_year->second << " = " << rate_year->second * rate_conv << "\n"; 
                        continue;
                    }
                    //2nd case: no exact match, but earlier date exists
                    else if (rate_year != rates.begin()){
                        rate_year--;
                        std::cout << date << " => " << rate_year->second << " = " << rate_year->second * rate_conv << "\n"; 
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

// void BitcoinExchange::processRates(){
//     std::fstream data("data.csv", std::ios::in);
//     if (!data.is_open())
//         throw std::ios_base::failure("data.csv could not be opened");
    
//     //reading from the file
//     std::string content;
//     getline(data, content);
//     if (content != "date,exchange_rate")
//         throw std::invalid_argument("invalid data.csv content");

//     std::string date;
//     std::string rate;
//     // address of an integer to store the number of characters processed
//     std::size_t  int_addr = 0;
//     double  rate_conv;
//     while(getline(data, content)){
//         auto pos = content.find(",");
//         if (pos == std::string::npos)
//             throw std::invalid_argument("invalid data.csv content");
//         date = content.substr(0, pos);
//         rate = content.substr(pos + 1);
//         try{
//             rate_conv = std::stod(rate, &int_addr);
//             if (int_addr != rate.length() || (rate_conv < 0))
//                 throw std::invalid_argument("invalid data.csv content");
//             rates[getDate(date)] = rate_conv;    
//         } catch (std::exception& e){
//             std::cout << "Error: " << e.what();
//         }
//     } 
// }

// void BitcoinExchange::processFile(const std::string& input_file, unsigned char c){
//        //checking for valid file
//        std::fstream filein(input_file, std::ios::in);
//        if (!filein.is_open())
//             throw std::ios_base::failure("input file invalid");
        
//        //reading from the file
//        std::string content;
//        std::string firstline = "date" + c;
//        firstline += "value";
//        std::string line;
//        getline(filein, line);
//        if (line != firstline){
//             throw std::invalid_argument("content of the input file invalid");   
//        }
       
//         while(std::getline(filein, line)){
//             if (content.max_size() - line.size() > content.size()){
//                content.append(line);
//                auto pos = line.find(c);
//                if (pos == std::string::npos)
//                     throw std::invalid_argument("content of the input file invalid");   
//                 std::string date = line.substr(0, pos);
//                 if (spaces(date) == true)
//                     throw std::invalid_argument("content of the input file invalid");   
                    
//         }
//         else
//             throw std::invalid_argument("file too big");   
//        }
//        //checking if eof was reached as it should have been
//        if (!filein.eof()){
//            std::cout << "Error: File reading failed.\n";
//            return ;
//        }
//        filein.close();
// }

