/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:47:46 by mspasic           #+#    #+#             */
/*   Updated: 2025/10/02 00:36:25 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <ctime>

class BitcoinExchange{
    private:
        std::map<int, double> rates;

        int getDate(const std::string& date);
        
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& obj);
        BitcoinExchange& operator=(const BitcoinExchange& obj);
        
        void BitcoinExchange::processFile(const std::string& input_file, unsigned char c, bool inputed);

        void exchange(const std::string& input_file);
};