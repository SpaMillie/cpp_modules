/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 11:34:06 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/19 20:24:58 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
// #include <string>

int main(){{
    try{
        std::cout << "TESTING: CREATION OF OBJECTS\n";
        int* a = new int;
        std::cout << a << std::endl;
        Array <std::string> testing;
        std::cout << "Array 1 print size: " << testing.size() << std::endl;
        Array <std::string> testing1(5);
        std::cout << "Array 2 print size: " << testing1.size() << std::endl;
        testing = testing1;
        std::cout << "Array 1 print size: " << testing.size() << std::endl;
        Array testing2(testing);
        std::cout << "Array 3 print size: " << testing2.size() << std::endl;
        std::cout << "*************************\n";
    }
    catch (std::exception& e){
        std::cout << "Error: " << e.what() << "\n";
    }
}{
    try{
        std::cout << "TESTING: [] operator\n";
        int int_array[] = {23, 767, 343, 665};
        Array <int> testing_int(4);
        for (int i = 0; i < 4; i++){
            testing_int[i] = int_array[i];
        }
        char char_array[] = {'h', 'o', 'w', 'n', 'o', 'w'};
        Array <char> testing_char(6);
        for (int i = 0; i < 6; i++){
            testing_char[i] = char_array[i];
        }     
        std::string string_array[] = {"how", "now", "brown", "cow"};
        Array <std::string> testing_string(6);
        for (int i = 0; i < 6; i++){
            testing_string[i] = string_array[i];
        }
        std::cout << std::endl;
        testing_char.printAll();
        std::cout << std::endl;
        testing_int.printAll();
        std::cout << std::endl;
        testing_string.printAll(); 
    }    
        catch (std::exception& e){
        std::cout << "Error: " << e.what() << "\n";
    }
}}