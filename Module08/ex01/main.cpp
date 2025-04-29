/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:11:17 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/29 18:45:52 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{{
    std::cout << "TESTING: FROM SUBJECT\n";
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.printAll();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << "===========================\n";
}{
    try{
        std::cout << "TESTING: 1000 NUMBERS\n";
        Span sp = Span(1000);
        sp.massAddNumber(-234);
        sp.printAll();
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        sp.massRandAddNumber();
        sp.printAll();
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << "===========================\n";}
    catch(const std::exception& e)   {
        std::cout << "Error: " << e.what() << std::endl;
    }
}{
    try{
        std::cout << "TESTING: 10000 NUMBERS\n";
        Span sp = Span(10000);
        sp.massAddNumber(-234);
        sp.printAll();
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << "===========================\n";}
    catch(const std::exception& e)   {
        std::cout << "Error: " << e.what() << std::endl;
    }
}{
    try{
        std::cout << "TESTING: NOT ENOUGH NUMBERS TO FIND THE SPAN ERROR\n";
        Span sp = Span(1);
        sp.addNumber(34);
        sp.printAll();
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl; }
    catch(const std::exception& e)   {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << "===========================\n";
    }
}{
    try{
        std::cout << "TESTING: MAX SIZE REACHED ERROR\n";
        Span sp = Span(3);
        sp.addNumber(34);
        sp.addNumber(46);
        sp.addNumber(24);
        sp.addNumber(55);
        sp.printAll();
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl; }
    catch(const std::exception& e)   {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << "===========================\n";
    }
}
}