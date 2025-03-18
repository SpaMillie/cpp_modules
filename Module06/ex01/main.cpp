/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:53:59 by mspasic           #+#    #+#             */
/*   Updated: 2025/03/18 17:30:15 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"
#include "Serializer.hpp"

int main (void){
    Data variable("test", 243);
    Data* ptr = &variable; //technically, you don't even need this but it's more readable
    Serializer* test = nullptr;
    uintptr_t check = test->serialize(ptr);


    Data* checking = test->deserialize(check);

    if (checking == ptr){
        std::cout << "Data matches: " << checking->name << " and " << checking->number << "!\n";
    }
    else
        std::cout << "Uh-oh, data does not match\n";
}
