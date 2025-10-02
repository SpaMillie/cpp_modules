/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:47:46 by mspasic           #+#    #+#             */
/*   Updated: 2025/10/02 22:45:27 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <iostream>

class BitcoinExchange{
	private:
		std::map<int, double> rates;

		BitcoinExchange(const BitcoinExchange& obj) = delete;
		BitcoinExchange& operator=(const BitcoinExchange& obj) = delete;

	public:
		BitcoinExchange();
		~BitcoinExchange();

		void processFile(const std::string& input_file, unsigned char c, bool inputed);
};