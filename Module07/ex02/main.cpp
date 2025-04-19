/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 11:34:06 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/19 18:16:46 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
// #include <string>

int main(){{
    try{
        std::cout << "TESTING: DIFFERENT TYPE ARRAYS\n";
        int int_array[] = {23, 767, 343, 665};
        char char_array[] = {'h', 'o', 'w', 'n', 'o', 'w'};
        std::string string_array[] = {"how", "now", "brown", "cow"};
        std::cout << "*************************\n";
}
    catch (std::exception& e){
        std::cout << "Error: " << e.what() << "\n";
    }
}{
    try{
        std::cout << "TESTING: DIFFERENT TYPE ARRAYS\n";
    int* a = new int;
    std::cout << a << std::endl;
}
    catch (std::exception& e){
        std::cout << "Error: " << e.what() << "\n";
    }
}{
    try{
        std::cout << "TESTING: DIFFERENT TYPE ARRAYS\n";
    int int_array[] = {23, 767, 343, 665};
    char char_array[] = {'h', 'o', 'w', 'n', 'o', 'w'};
    std::string string_array[] = {"how", "now", "brown", "cow"};}
    catch (std::exception& e){
        std::cout << "Error: " << e.what() << "\n";
    }
}}