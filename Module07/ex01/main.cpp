/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 20:30:04 by mspasic           #+#    #+#             */
/*   Updated: 2025/03/26 19:38:12 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
// #include <iostream>

void print_c(char c){std::cout << c << std::endl;}

void print_n(int c){std::cout << c << std::endl;}

void add(int& x){ x += 1;}

int main(void){
    {
        char array[] = {'d', 'f', 'd', 't'};
        int array2[] = {1, 2, 3, 4};
        ::iter(array, 4, &print_c);
        ::iter(array2, 4, &print_n);
        ::iter(array2, 4, &add);
        ::iter(array2, 4, &print_n);
    }
}
