/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:49:19 by mspasic           #+#    #+#             */
/*   Updated: 2025/09/30 07:39:51 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv){
    //checking for correct number of arguments
    if (argc != 2){
        std::cout << "Error: Please provide a single file.\n";
        return 1;
    }
    try {
        std::string input_file(argv[1]);
        
        BitcoinExchange exchange_office;
        exchange_office.processRates();
        exchange_office.processFile(input_file);
        exchange_office.exchange(input_file);
    }
    catch(const std::exception& e){
        std::cout << "Error: " << e.what();
    }
    return 0;
}