/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:17:38 by mspasic           #+#    #+#             */
/*   Updated: 2025/03/22 15:42:28 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>
#include <iostream>
#include <limits.h>

/* HELPER FUNCTIONS FOR PRINTING */

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

void    print_invalid(void){
    std::cout << "  character: impossible\n";
    std::cout << "  integer: impossible\n";
    std::cout << "  float: impossible\n";
    std::cout << "  double: impossible\n";
}

/* EDGE CASE FUNCTIONS FOR SCIENCE AND FUN */

bool    flt_check_edge(std::string literal){
    if (literal == "-inff" || literal == "+inff" || literal == "nanf")
        return (true);
    return (false);
}

bool    dbl_check_edge(std::string literal){
    if (literal == "nan" || literal == "-inf" || literal == "+inf" )
        return (true);
    return (false);
}

void    print_edge(std::string lit, char c){
    float f;
    double d;

    std::cout << "  character: impossible\n";
    std::cout << "  integer: impossible\n";
    if (c == 'f'){
        f = std::stof(lit);
        d = static_cast <double> (f);
        std::cout << "  float: " << f << "f\n";
        std::cout << "  double: " << d << "\n";
    }
    else{
        d = std::stod(lit);
        f = static_cast <float> (d);
        std::cout << "  float: " << f << "f\n";
        std::cout << "  double: " << d << "\n";
    }
}

/* HELPER FUNCTIONS FOR TYPE RECOGNITION */

bool is_char(std::string lit){
    if ((lit.size() == 1) && ((lit[0] >= 0 && lit[0] < '0') || (lit[0] > '9' && lit[0] <= 127)))
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

/* SETTING AND PRINTING FUNCTIONS */

void    print_char(unsigned char c){
    if ((c >= 0 && c < 32) || c == 127)
        std::cout << "  character: Non displayable\n";
    else if (c > 31 && c < 127)
        std::cout << "  character: '" << c << "'\n";
    else
        std::cout << "  character: impossible\n";
}

void    print_all(unsigned char c, int i, float f, double d, size_t n){
    print_char(c);
    std::cout << "  integer: " << i << "\n";
    std::cout << std::fixed << std::setprecision(n);
    std::cout << "  float: " << f << "f\n";
    std::cout << "  double: " << d << "\n";
}

void    set_char(std::string literal){
    unsigned char    c = literal[0];
    int     int_c = static_cast <int> (c);
    float   float_c = static_cast <float> (c);
    double  double_c = static_cast <double> (c);

    print_all(c, int_c, float_c, double_c, 1);
}

void    set_print_int(std::string literal){
    int     i;
    unsigned char    char_i;
    float   float_i;
    double  double_i;

    try{
        i = std::stoi(literal);
        if (i < 1 || i > 127)
            char_i = 128;
        else
            char_i = static_cast <unsigned char> (i);
        float_i = static_cast <float> (i);
        double_i = static_cast <double> (i);

        print_all(char_i, i, float_i, double_i, 1);
    }
    catch(const std::exception& e){
       print_invalid(); 
    }
}

void    set_print_float(std::string literal){
    int     int_f;
    unsigned char    char_f;
    float   f;
    double  double_f;

    try{
        if (flt_check_edge(literal) == true){
            print_edge(literal, 'f');
            return ;} 
        f = std::stof(literal);
        if (f < 1 || f > 127)
            char_f = 128;
        else 
            char_f = static_cast <unsigned char> (f);
        double_f = static_cast <double> (f);
        if (double_f < INT_MIN || double_f > INT_MAX)
            return (print_edge)(literal, 'f');
        int_f = static_cast <int> (f);
        print_all(char_f, int_f, f, double_f, find_dot(literal));
    }
    catch(const std::exception& e){
       print_invalid(); 
    }
}

void    set_print_double(std::string literal){
    int     int_d;
    unsigned char    char_d;
    float   float_d;
    double  d;

    try{
        if (dbl_check_edge(literal) == true){
            print_edge(literal, 'd');
            return ;}
        d = std::stod(literal);
        try{float_d = std::stof(literal);
        }
        catch(std::exception& e){
            std::cout << "  character: impossible\n";
            std::cout << "  integer: impossible\n";
            std::cout << "  float: impossible\n";
            std::cout << "  double: " << d << "\n";
            return;
        }
        if (d < 1 || d > 127)
            char_d = 128;
        else  
            char_d = static_cast <unsigned char> (d);
        if (d < INT_MIN || d > INT_MAX)
            return (print_edge)(literal, 'd'); 
        int_d = static_cast <int> (d);
        float_d = static_cast <float> (d);
        print_all(char_d, int_d, float_d, d, find_dot(literal)); 
    }
    catch(const std::exception& e){
       print_invalid(); 
    }
}


/* THE MAIN FUNCTION FOR CONVERSION*/

void ScalarConverter::convert(std::string literal){
    std::cout << "Converting the string: \"" << literal << "\" >>\n";
    if  (!literal.empty() && is_char(literal))
        set_char(literal); 
    else if (!literal.empty() && is_int(literal)){
        try{
            std::stoi(literal);
            set_print_int(literal); 
        }
        catch(std::exception& e){
            set_print_double(literal);
        }}
    else if (!literal.empty() && is_double(literal))
        set_print_double(literal);
    else if (!literal.empty() && is_float(literal))
        set_print_float(literal);
    else
        print_invalid();
}