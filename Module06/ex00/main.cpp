/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:25:46 by mspasic           #+#    #+#             */
/*   Updated: 2025/03/22 15:37:52 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv){
    // {
    ScalarConverter* test = nullptr;
    if (argc == 2)
    {
        try{
            std::string cstring(argv[1]);
            test->convert(cstring);
        }
        catch(std::exception &e){
            std::cout << "Error: Something went wrong.\n";
        }
    }
    else
    {
        std::cout << "Please provide one argument.\n";
    }
//     std::cout << "TESTING: CHARACTER\n";
//     test->convert("c"); //regular character
//     std::cout << std::endl;
//     test->convert("244"); //regular character
//     std::cout << std::endl;
//     test->convert(" "); //regular character
//     std::cout << std::endl;
//     test->convert(""); //empty string
//     std::cout << std::endl;
//     test->convert("\x01"); //unprintable character
//     std::cout << "*************************\n";
//     std::cout << "TESTING: INTEGER\n";
//     test->convert("0"); //regular integer
//     std::cout << std::endl;
//     test->convert("-0"); //a bit weird regular integer
//     std::cout << std::endl;
//     test->convert("42"); //regular integer
//     std::cout << std::endl;
//     test->convert("-39543"); //regular negative integer
//     std::cout << std::endl;
//     test->convert("2433234"); //longish integer
//     std::cout << std::endl;
//     test->convert("243323435346"); //too long of an integer == double
//     std::cout << std::endl;
//     test->convert("-243323435346"); //too long of a negative integer == double
//     std::cout << std::endl;
//     test->convert("243323435346L"); //long integer
//     std::cout << "*************************\n";
//     std::cout << "TESTING: DOUBLE AND FLOAT\n";    
//     test->convert(".22123"); //regular double
//     std::cout << std::endl;
//     test->convert("42.0"); //regular double
//     std::cout << std::endl;
//     test->convert("42.0f"); //regular float
//     std::cout << std::endl;
//     test->convert("-42.0"); //regular negative double
//     std::cout << std::endl;
//     test->convert("-42.0f"); //regular negative float 
//     std::cout << std::endl;
//     test->convert("42.0000000000"); //a lot of zeroes after the fractional point
//     std::cout << std::endl;
//     test->convert("42.4095800f"); //some zeroes at the end of the fractional part
//     std::cout << std::endl;
//     std::cout << "*************************\n";
//     std::cout << "TESTING: THE 'WEIRD' STUFF\n";
//     test->convert("324324.324324f"); // no zeroes but an f
//     std::cout << std::endl;
//     test->convert("nan");
//     std::cout << std::endl;
//     test->convert("-inf");
//     std::cout << std::endl;
//     test->convert("+inf");
//     test->convert("nanf");
//     std::cout << std::endl;
//     test->convert("-inff");
//     std::cout << std::endl;
//     test->convert("+inff");
// }
}