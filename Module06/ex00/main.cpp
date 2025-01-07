/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:25:46 by mspasic           #+#    #+#             */
/*   Updated: 2025/01/07 19:37:16 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip> //delete

int main(void){
    ScalarConverter* test = nullptr;
    
    std::cout << "TESTING: CHARACTER\n";
    test->convert("c"); //regular character
    test->convert("244"); //regular character
    test->convert(" "); //regular character
    test->convert(""); //empty string
    test->convert("\x01"); //unprintable character
    std::cout << "*************************\n";
    std::cout << "TESTING: INTEGER\n";
    test->convert("0"); //regular integer
    test->convert("-0"); //a bit weird regular integer
    test->convert("42"); //regular integer
    test->convert("-39543"); //regular negative integer
    test->convert("2433234"); //longish integer
    test->convert("243323435346"); //too long of an integer
    test->convert("-243323435346"); //too long of a negative integer
    test->convert("243323435346L"); //long integer
    std::cout << "*************************\n";
    std::cout << "TESTING: DOUBLE AND FLOATn";    
    test->convert("42.0"); //regular double
    test->convert("42.0f"); //regular float
    test->convert("-42.0"); //regular negative double
    test->convert("-42.0f"); //regular negative float 
    test->convert("42.0000000000"); //a lot of zeroes after the fractional point
    test->convert("42.4095800f"); //some zeroes at the end of the fractional part
    test->convert("324324.324324"); //no zeroes
    test->convert("324324.324324f"); // no zeroes but an f
    test->convert("12345.67890123456789"); // long double
    test->convert("inf");
    test->convert("nanf");
    test->convert("-inf");
    test->convert("+inf");

    float num = 123456.678908f;
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "check: " << num << std::endl;
}