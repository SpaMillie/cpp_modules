/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:17:38 by mspasic           #+#    #+#             */
/*   Updated: 2025/01/06 16:25:33 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string literal){
    int     int_lit;
    float   float_lit;
    double  dbl_lit;
    
    try{
        int_lit = std::stoi(literal);
        std::cout << "  integer: " << int_lit << "\n";
    }
    catch(const std::exception& e){
        std::cout << "  integer: N/A\n";
    }
    try{
        float_lit = std::stof(literal);
        std::cout << "  float: " << float_lit << "f\n";
    }
    catch(const std::exception& e){
        std::cout << "  float: N/A\n";
    }
    try{
        dbl_lit = std::stod(literal);
        std::cout << "  double: " << dbl_lit << "\n";
    }
    catch(const std::exception& e){
        std::cout << "  double: N/A\n";
    }
}