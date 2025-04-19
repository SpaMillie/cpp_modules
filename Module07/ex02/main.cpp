/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 11:34:06 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/19 21:05:35 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
// #include <string>

int main(){{
    try{
        std::cout << "TESTING: CREATION OF OBJECTS\n";
        //default constructor
        Array <std::string> testing;
        std::cout << "Array 1 print size: " << testing.size() << std::endl;
        //custom constructor
        Array <std::string> testing1(5);
        std::cout << "Array 2 print size: " << testing1.size() << std::endl;
        //copy assignment operator
        testing = testing1;
        std::cout << "Array 1 print size: " << testing.size() << std::endl;
        //copy constructor
        Array testing2(testing);
        std::cout << "Array 3 print size: " << testing2.size() << std::endl;
        std::cout << "*************************\n";
    }
    catch (std::exception& e){
        std::cout << "Error: " << e.what() << "\n";
    }
}{
    try{
        std::cout << "TESTING: [] OPERATOR\n";
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
        Array <std::string> testing_string(4);
        for (int i = 0; i < 4; i++){
            testing_string[i] = string_array[i];
        }
        std::cout << std::endl;
        testing_char.printAll();
        std::cout << std::endl;
        testing_int.printAll();
        std::cout << std::endl;
        testing_string.printAll();
        std::cout << "*************************\n";
    }    
        catch (std::exception& e){
        std::cout << "Error: " << e.what() << "\n";
    }
}
try{
    std::cout << "TESTING: at() OPERATOR\n";
    int int_array[] = {23, 767, 343, 665};
    Array <int> testing_int(4);
    for (int i = 0; i < 4; i++){
        testing_int.at(i) = int_array[i];
    }
    char char_array[] = {'h', 'o', 'w', 'n', 'o', 'w'};
    Array <char> testing_char(6);
    for (int i = 0; i < 6; i++){
        testing_char.at(i) = char_array[i];
    }     
    std::string string_array[] = {"how", "now", "brown", "cow"};
    Array <std::string> testing_string(4);
    for (int i = 0; i < 4; i++){
        testing_string.at(i) = string_array[i];
    }
    std::cout << std::endl;
    testing_char.printAll();
    std::cout << std::endl;
    testing_int.printAll();
    std::cout << std::endl;
    testing_string.printAll();
    std::cout << "*************************\n";
}    
    catch (std::exception& e){
    std::cout << "Error: " << e.what() << "\n";
}
try{
    std::cout << "TESTING: size() OPERATOR\n";
    Array <int> testing_int(4);
    Array <char> testing_char(6);
    Array <std::string> testing_string(16);
    std::cout << "1st should be 4: " << testing_int.size() << "\n";
    std::cout << "2nd should be 6: " << testing_char.size() << "\n";
    std::cout << "3rd should be 16: " << testing_string.size() << "\n";
    std::cout << "*************************\n";
}    
    catch (std::exception& e){
    std::cout << "Error: " << e.what() << "\n";
}
try{
    std::cout << "TESTING: OUT_OF_RANGE\n";
    Array <int> testing_int(4);
    std::cout << testing_int.at(5) << std::endl;
    std::cout << "*************************\n";
}    
    catch (std::exception& e){
    std::cout << "Error: " << e.what() << "\n";
}
}