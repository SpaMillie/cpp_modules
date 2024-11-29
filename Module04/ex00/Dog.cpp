/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:19 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/29 17:07:28 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    this->setType("Dog");
    std::cout << "A doggo was born!\n";
}

Dog::Dog(const Dog& obj){
    *this = obj;
}

Dog& Dog::operator=(const Dog& other){
    if (this == &other)
        return (*this);
    this->setType(other.getType());
    return (*this);
}

Dog::~Dog(){
    std::cout << "Trigger warning: a doggo has died :(\n";
}

void    Dog::makeSound(void) const{
    std::cout << "Bork! Bork!\n";
}
