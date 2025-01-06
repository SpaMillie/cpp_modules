/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:17:38 by mspasic           #+#    #+#             */
/*   Updated: 2025/01/06 19:34:18 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>
#include <iostream>
#include <cmath>

size_t find_dot(std::string lit){
    size_t dotty = 1;
    for (size_t i = 0; i < lit.size(); i++)
    {
        if (lit[i] == '.')
            dotty = i;
    }
    return (dotty);
}

bool    check_edge(std::string literal){
    if (literal == "inf" || literal == "nan" || literal == "-inf" || literal == "+inf" )
        return (true);
    return (false);
}

void    print_int(std::string literal){
    int     int_lit;

    std::cout << "  integer: ";
    if (check_edge(literal) == true)
    {
        std::cout << "N/A\n";
        return;
    }
    try{
        int_lit = std::stoi(literal);
        std::cout << int_lit << "\n";
    }
    catch(const std::exception& e){
        std::cout << "N/A\n";
    }
}

void    print_char(std::string literal){
    if (std::isprint(literal[0]))
        std::cout << "  character: " << literal[0] << "\n";
    else if(literal.empty())
        std::cout << "  character: \"\"\n";
    else
        std::cout << "  character: [??]\n";
}

void ScalarConverter::convert(std::string literal){
    double  dbl_lit;
    size_t  dot_place = find_dot(literal);
    
    std::cout << "Converting the string: \"" << literal << "\" >>\n";
    print_char(literal);
    print_int(literal);
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