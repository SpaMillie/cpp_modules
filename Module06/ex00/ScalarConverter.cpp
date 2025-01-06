/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:17:38 by mspasic           #+#    #+#             */
/*   Updated: 2025/01/06 18:55:37 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>

size_t find_dot(std::string lit){
    size_t dotty = 1;
    for (size_t i = 0; i < lit.size(); i++)
    {
        if (lit[i] == '.')
            dotty = i;
    }
    return (dotty);
}

void ScalarConverter::convert(std::string literal){
    int     int_lit;
    double  dbl_lit;
    size_t  dot_place = find_dot(literal);
    
    std::cout << "Converting the string: \"" << literal << "\" >>\n";
    if (std::isprint(literal[0]))
        std::cout << "  character: " << literal[0] << "\n";
    else if(literal.empty())
        std::cout << "  charcter: \"\"\n";
    else
        std::cout << "  character: [??]\n";
    try{
        int_lit = std::stoi(literal);
        std::cout << "  integer: " << int_lit << "\n";
    }
    catch(const std::exception& e){
        std::cout << "  integer: N/A\n";
    }
    try{
        dbl_lit = std::stod(literal);
        std::cout << std::fixed << std::setprecision(dot_place);
        std::cout << "  double: " << dbl_lit << "\n";
        std::cout << "  float: " << dbl_lit << "f\n";
    }
    catch(const std::exception& e){
        std::cout << "  double: N/A\n";
        std::cout << "  float: N/A\n";
    
    }
}