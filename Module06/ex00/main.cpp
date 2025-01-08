/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:25:46 by mspasic           #+#    #+#             */
/*   Updated: 2025/01/08 18:24:51 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip> //delete
#include <limits> //delete

int main(void){{
    ScalarConverter* test = nullptr;
    
    std::cout << "TESTING: CHARACTER\n";
    test->convert("c"); //regular character
    std::cout << std::endl;
    test->convert("244"); //regular character
    std::cout << std::endl;
    test->convert(" "); //regular character
    std::cout << std::endl;
    test->convert(""); //empty string
    std::cout << std::endl;
    test->convert("\x01"); //unprintable character
    std::cout << "*************************\n";
    std::cout << "TESTING: INTEGER\n";
    test->convert("0"); //regular integer
    std::cout << std::endl;
    test->convert("-0"); //a bit weird regular integer
    std::cout << std::endl;
    test->convert("42"); //regular integer
    std::cout << std::endl;
    test->convert("-39543"); //regular negative integer
    std::cout << std::endl;
    test->convert("2433234"); //longish integer
    std::cout << std::endl;
    test->convert("243323435346"); //too long of an integer
    std::cout << std::endl;
    test->convert("-243323435346"); //too long of a negative integer
    std::cout << std::endl;
    test->convert("243323435346L"); //long integer
    std::cout << "*************************\n";
    std::cout << "TESTING: DOUBLE AND FLOAT\n";    
    test->convert(".22123"); //regular double
    std::cout << std::endl;
    test->convert("42.0"); //regular double
    std::cout << std::endl;
    test->convert("42.0f"); //regular float
    std::cout << std::endl;
    test->convert("-42.0"); //regular negative double
    std::cout << std::endl;
    test->convert("-42.0f"); //regular negative float 
    std::cout << std::endl;
    test->convert("42.0000000000"); //a lot of zeroes after the fractional point
    std::cout << std::endl;
    test->convert("42.4095800f"); //some zeroes at the end of the fractional part
    std::cout << std::endl;
    test->convert("324324.324324"); //no zeroes
    std::cout << std::endl;
    test->convert("324324.324324f"); // no zeroes but an f
    std::cout << std::endl;
    test->convert("12345.67890123456789"); // long double
    std::cout << std::endl;
    test->convert("inf");
    std::cout << std::endl;
    test->convert("nanf");
    std::cout << std::endl;
    test->convert("-inf");
    std::cout << std::endl;
    test->convert("+inf");
}

{
    float num = std::numeric_limits<float>::infinity();
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "check: " << num << std::endl;
}{
    float num = .324f;
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "check: " << num << std::endl;
}
{
    float num = 42.0f;
    char c = (char)num;
    std::cout << "check: " << c << std::endl;
}
}