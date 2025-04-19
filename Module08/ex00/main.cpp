/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:04:36 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/19 22:15:20 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>

int main(){{
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
}}