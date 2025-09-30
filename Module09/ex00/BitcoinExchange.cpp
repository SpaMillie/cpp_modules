/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:47:09 by mspasic           #+#    #+#             */
/*   Updated: 2025/09/30 08:28:29 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj){}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj){}


int BitcoinExchange::getDate(const std::string& date){
    //continue here
}


void BitcoinExchange::processRates(){
    std::fstream data("data.csv", std::ios::in);
    if (!data.is_open())
        throw std::ios_base::failure("data.csv could not be opened");
    
    //reading from the file
    std::string content;
    getline(data, content);
    if (content != "date,exchange_rate")
        throw std::invalid_argument("invalid data.csv content");

    std::string date;
    std::string rate;
    // address of an integer to store the number of characters processed
    std::size_t  int_addr = 0;
    double  rate_conv;
    while(getline(data, content)){
        auto pos = content.find(",");
        if (pos == std::string::npos)
            throw std::invalid_argument("invalid data.csv content");
        date = content.substr(0, pos);
        rate = content.substr(pos + 1);
        try{
            rate_conv = std::stod(rate, &int_addr);
            if (int_addr != rate.length())
                throw std::invalid_argument("invalid data.csv content");
            rates[getDate(date)] = rate_conv;    
        } catch (std::exception& e){
            std::cout << "Error: " << e.what();
        }
    }
    
    
}

void BitcoinExchange::processFile(const std::string& input_file){
       //checking for valid file
       std::fstream filein(input_file, std::ios::in);
       if (!filein.is_open())
            throw std::ios_base::failure("data.csv could not be opened");
        
       //reading from the file
       std::string content;
       std::string firstline;
       getline(filein, firstline);
       if (firstline != "date | value"){
           
       }
       std::string line;
       while(std::getline(filein, line)){
           if (content.max_size() - line.size() > content.size())
               content.append(line);
           else{
               std::cout << "Error: File too big.\n";
               return ;
           }
       }
       //checking if eof was reached as it should have been
       if (!filein.eof()){
           std::cout << "Error: File reading failed.\n";
           return ;
       }
       filein.close();
}

