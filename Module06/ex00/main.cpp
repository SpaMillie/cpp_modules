/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:25:46 by mspasic           #+#    #+#             */
/*   Updated: 2025/01/06 18:43:27 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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
    test->convert("42.0"); //regular double
    test->convert("42.0f"); //regular float
    test->convert("-42.0"); //regular negative double
    test->convert("-42.0f"); //regular negative float
    test->convert("-39543"); //regular negativee integer
    test->convert("2433234"); //longish integer
    test->convert("243323435346"); //too long of an integer
    test->convert("-243323435346"); //too long of a negative integer
    test->convert("243323435346L"); //long integer

    test->convert("inf");
    test->convert("324324.324324");
    test->convert("nan");
    test->convert("nanf");
    test->convert("-inf");
    test->convert("+inf");
}