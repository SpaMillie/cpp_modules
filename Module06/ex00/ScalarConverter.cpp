/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:17:38 by mspasic           #+#    #+#             */
/*   Updated: 2025/01/08 18:26:57 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>
#include <iostream>
// #include <cmath>

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
        i--;
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
    size_t i = 0;

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
    size_t i = 0;
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
    size_t i = 0;
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

    if (c >= 32 && c <=126) //could use std::isprint(c) here but not sure if it's allowed
        std::cout << "  character: " << c << "\n";
    else
        std::cout << "  character: ?\n";
    std::cout << "  integer: " << int_c << "\n  float: ";
    std::cout << std::fixed << std:: setprecision(1) << float_c << "f\n  double: " << double_c << "\n";
}

void    print_int(std::string literal){
    int     i;
    char    char_i;
    float   float_i;
    double  double_i;

    try{
        i = std::stoi(literal);
        char_i = (char)i;
        if (char_i < 32 || char_i > 126)
            char_i = '?';
        float_i = (float)i;
        double_i = (double)i;
        std::cout << "  integer: " << i << "\n  character: " << char_i << "\n  float: ";
        std::cout << std::fixed << std:: setprecision(1) << float_i << "f\n  double: " << double_i << "\n";
    }
    catch(const std::exception& e){
        std::cout << "  integer: N/A\n  character: N/A\n  float: N/A\n  double: N/A\n";
        std::cout << "Error: " << e.what() << "\n";
    }
}

void    print_float(std::string literal){
    int     int_f;
    char    char_f;
    float   f;
    double  double_f;

    try{
        f = std::stof(literal);
        char_f = (char)f;
        if (char_f < 32 || char_f > 126)
            char_f = '?';
        int_f = (int)f;
        double_f = (double)f;
        std::cout << std::fixed << std::setprecision(find_dot(literal));
        std::cout << "  float: " << f << "f\n  character: " << char_f << "\n  integer: ";
        std::cout << int_f << "\n  double: " << double_f << "\n";
    }
    catch(const std::exception& e){
        std::cout << "float: N/A\n  integer: N/A\n  character: N/A  double: N/A\n";
        std::cout << "Error: " << e.what() << "\n";
    }
}

void    print_double(std::string literal){
    int     int_d;
    char    char_d;
    float   float_d;
    double  d;

    try{
        d = std::stod(literal);
        char_d = (char)d;
        int_d = (int)d;
        float_d = (double)d;
        std::cout << std::fixed << std::setprecision(find_dot(literal));
        std::cout << "  double: " << d << "\n  character: " << char_d << "\n  integer: ";
        std::cout << int_d << "\n  float: " << float_d << "f\n";
    }
    catch(const std::exception& e){
        std::cout << "  double: N/A\n   integer: N/A\n  character: N/A\n    float: N/A\n";
        std::cout << "Error: " << e.what() << "\n";
    }
}

void    print_invalid(void){
    std::cout << "[Error: string does not fit any of the types]\n";
    std::cout << "  character: N/A\n  integer: N/A\n  float: N/A\n  double: N/A\n";
}

/* THE MAIN FUNCTION FOR CONVERSION*/

void ScalarConverter::convert(std::string literal){
    std::cout << "Converting the string: \"" << literal << "\" >>\n";
    if (!literal.empty() && is_char(literal))
        print_char(literal);
    else if (!literal.empty() && is_int(literal))
        print_int(literal);
    else if (!literal.empty() && is_float(literal))
        print_float(literal);
    else if (!literal.empty() && is_double(literal))
        print_double(literal);
    else
        print_invalid();
}