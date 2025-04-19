/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 20:30:04 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/19 10:58:45 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void print_c(char c){std::cout << c << std::endl;}

void print_cc(const char c){std::cout << c << std::endl;}

void print_n(int c){std::cout << c << std::endl;}

void print_cn(const int c){std::cout << c << std::endl;}

void add(int& x){ x += 1;}

int add_input(int& x){ x += 1;
    return(x);}

int main(void){
    {
        try{
            char array[] = {'d', 'f', 'd', 't'};
            int array2[] = {1, 2, 3, 4};
            std::cout << "TESTING: CHAR ARRAY:\n";
            ::iter(array, 4, print_c);
            std::cout << "TESTING: CHAR ARRAY (CONST):\n";
            ::iter(array, 4, print_cc);
            std::cout << "TESTING: INT ARRAY:\n";
            ::iter(array2, 4, print_n);
            std::cout << "TESTING: INT ARRAY (CONST):\n";
            ::iter(array2, 4, print_cn);
            std::cout << "TESTING: INT ARRAY INCREMENTED AND PRINTED:\n";
            ::iter(array2, 4, add);
            ::iter(array2, 4, print_n);
            std::cout << "Function returns a value: \n";
            ::iter(array2, 4, add_input);
            ::iter(array2, 4, print_cn);
            std::cout << "TESTING: NO ADDRESS:\n";
            int *test = nullptr;
            ::iter(test, 5, print_c);
        }
        catch (std::exception& e){
            std::cout << "Error: " << e.what() << "\n";
        }
    }
}
