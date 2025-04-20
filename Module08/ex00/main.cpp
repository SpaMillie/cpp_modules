/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:04:36 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/20 14:05:53 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>
#include <vector>
#include <list>
#include <deque>

int main(){{
/*
ARRAY
data structures used to store multiple elements of the same data type
Container that wraps over fixed size static array.
*/
    std::cout << "TESTING: ARRAY\n";
    std::array<int, 6> array0= {545, 454, 98, 323, 54, 988};
    try{
        ::easyfind(array0, 545);
        ::easyfind(array0, 98);
        ::easyfind(array0, 456);
        std::cout << "**************************\n";
    }
    catch(std::exception &e){
        std::cout << "Error: " << e.what() << "\n";
    }
}
/*
VECTOR
a resizable array
data structures used to store multiple elements of the same data type
unlike an array, it can dynamically grow and shrink in size
*/
{
    std::cout << "TESTING: VECTOR\n";
    std::vector<int> vector0 = {545, 454, 98, 323, 54, 988};
    try{
        ::easyfind(vector0, 545);
        ::easyfind(vector0, 98);
        ::easyfind(vector0, 456);
        std::cout << "**************************\n";
    }
    catch(std::exception &e){
        std::cout << "Error: " << e.what() << "\n";
    }
}
{
/*
LIST
similar to a vector 
can store multiple elements of the same type and dynamically grow in size
BUT
You can add and remove elements from both the beginning and at the end of a list
does not support random access, meaning you cannot directly jump to a specific index, 
or access elements by index numbers.
Implementation of Doubly Linked List data structure.
*/ 
    std::cout << "TESTING: LIST\n";
    std::list<int> list0 = {545, 454, 98, 323, 54, 988};
    try{
        ::easyfind(list0, 545);
        ::easyfind(list0, 98);
        ::easyfind(list0, 456);
        std::cout << "**************************\n";
    }
    catch(std::exception &e){
        std::cout << "Error: " << e.what() << "\n";
    }
}
/*
DEQUE
Dynamic array of fixed-size arrays that allows 
fast insertions and deletions at both ends.
a special type of queue 
*/ 
    std::cout << "TESTING: DOUBLE-ENDED QUEUE\n";
    std::deque<int> deque0 = {545, 454, 98, 323, 54, 988};
    try{
        ::easyfind(deque0, 545);
        ::easyfind(deque0, 98);
        ::easyfind(deque0, 456);
        std::cout << "**************************\n";
    }
    catch(std::exception &e){
        std::cout << "Error: " << e.what() << "\n";
    }
}