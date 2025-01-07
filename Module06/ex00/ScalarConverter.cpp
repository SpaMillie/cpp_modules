/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:17:38 by mspasic           #+#    #+#             */
/*   Updated: 2025/01/07 20:08:08 by mspasic          ###   ########.fr       */
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


//should you really accept the string that says inf as inf or should you be resolving this with real inf tests?
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

bool is_char(std::string lit){
    if ((lit.size() == 1 && (lit[0] >= 0 && lit[0] <= 127)))
        return (true);
    return (false);
}

// bool is_int(std::string lit){
    
// }

/*how to recognise the type:
- char > if it's a number between 0 and 127 or if its 1 char thats not a number
- int > if its a number with stoi maybe?
- float > number plus the dot plus the f
- double > number plus the dot minus the f
- invalid: string or something else*/

void ScalarConverter::convert(std::string literal){
    double  dbl_lit;
    size_t  dot_space = find_dot(literal);
    
    std::cout << "Converting the string: \"" << literal << "\" >>\n";
    print_char(literal);
    print_int(literal);
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