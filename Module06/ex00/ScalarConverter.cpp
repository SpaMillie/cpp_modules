/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:17:38 by mspasic           #+#    #+#             */
/*   Updated: 2025/01/08 17:26:57 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>
#include <iostream>
#include <cmath>

/* HELPER FUNCTIONS FOR CORRECTLY PRINTING DOUBLES AND FLOATS */

size_t find_dot(std::string lit){
    size_t dotty = 1;
    for (size_t i = 0; i < lit.size(); i++)
    {
        if (lit[i] == '.')
            dotty = i;
    }
    if (dotty == 1)
        return (dotty);
    size_t i = lit.size() - 1;
    while (lit[i] != '.' && (lit[i] == '0' || (lit[i] == 'f' && i == lit.size() - 1)))
    {
        std::cout << "dotty: " << dotty << " i: " << i << " lit[i]:  " << lit[i] << "\n";
        i--;
    }
    if (i != lit.size() - 1)
        dotty = i - dotty;
    else
        dotty = lit.size() - dotty - 1;
    if (dotty == 0)
        dotty = 1;
    return (dotty);
}

/* EDGE CASE FUNCTIONS FOR SCIENCE AND FUN */

bool    flt_check_edge(std::string literal){
    if (literal == "-inff" || literal == "+inff" || literal == "nanf")
        return (true);
    return (false);
}

bool    dbl_check_edge(std::string literal){
    if (literal == "inf" || literal == "nan" || literal == "-inf" || literal == "+inf" )
        return (true);
    return (false);
}

/* HELPER FUNCTIONS FOR TYPE RECOGNITION */

bool is_char(std::string lit){
    if ((lit.size() == 1 && (lit[0] >= 0 && lit[0] <= 127)))
        return (true);
    return (false);
}

bool is_int(std::string lit){
    int i = 0;

    while (i < lit.size()){
        if ((i == 0 && (lit[i] == '+' || lit[i] == '-')) || 
            (lit[i] >= '0' && lit[i] <= '9'))
            i++;
        else
            return (false);
    }
    return (true);
}

bool is_float(std::string lit){
    int i = 0;
    bool dot = false;

    if (flt_check_edge(lit) == true)
        return (true);
    while (i < lit.size()){   
        if ((i == 0 && (lit[i] == '+' || lit[i] == '-')) || 
            (lit[i] >= '0' && lit[i] <= '9') ||
            (lit[i] == '.' && dot == false) ||
            (lit[i] == 'f' && i == lit.size() - 1))
            {
                if (lit[i] == '.')
                    dot = true;
                i++;
            }
        else
            return (false);
    }
    return (true);
}

bool is_double(std::string lit){
    int i = 0;
    bool dot = false;
    
    if (dbl_check_edge(lit) == true)
        return (true);
    while (i < lit.size()){   
        if ((i == 0 && (lit[i] == '+' || lit[i] == '-')) || 
            (lit[i] >= '0' && lit[i] <= '9') ||
            (lit[i] == '.' && dot == false))
            {
                if (lit[i] == '.')
                    dot = true;
                i++;
            }
        else
            return (false);
    }
    return (true);
}

/* PRINTING FUNCTIONS */

void    print_char(std::string literal){
    char    c = literal[0];
    int     int_c = (int)c;
    float   float_c = (float)c;
    double  double_c = (double)c;

    if (c >= 33 && c <=126) //could use std::isprint(c) here but not sure if it's allowed
        std::cout << "  character: " << literal[0] << "\n";
    else
        std::cout << "  character: [non-printable]\n";
    std::cout << "  integer: " << int_c << "\n  float: " << float_c << "\n  double: " << double_c << "\n";
}

void    print_int(std::string literal){
    int     i;
    char    char_i;
    float   float_i;
    double  double_i;

    try{
        i = std::stoi(literal);
        char_i = (char)i;
        float_i = (float)i;
        double_i = (double)i;
        std::cout << i << "\n";
        std::cout << "  integer: ";

    }
    catch(const std::exception& e){
        std::cout << "N/A\n";
    }
}
void    print_float(std::string literal){

}

void    print_double(std::string literal){
    double  dbl_lit;
    size_t  dot_space = find_dot(literal);
    
    
    try{
        std::cout << "  dotty: " << dot_space << "\n";
        dbl_lit = std::stod(literal);
        std::cout << std::fixed << std::setprecision(dot_space);
        std::cout << "  double: " << dbl_lit << "\n";
        std::cout << "  float: " << dbl_lit << "f\n";
    }
    catch(const std::exception& e){
        std::cout << "  double: N/A\n";
        std::cout << "  float: N/A\n";
    
    }
}

void    print_invalid(std::string literal){

}

void ScalarConverter::convert(std::string literal){
    
    std::cout << "Converting the string: \"" << literal << "\" >>\n";
    if (is_char(literal))
        print_char(literal);
    else if (is_int(literal))
        print_int(literal);
    else if (is_float(literal))
        print_float(literal);
    else if (is_double(literal))
        print_double(literal);
    else
        print_invalid(literal);
}