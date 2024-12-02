/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:23:59 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/02 15:59:05 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("unknown"){
    std::cout << "Default constructor of class Animal called\n";
}

Animal::Animal(const Animal& obj){
    std::cout << "Copy constructor of class Animal called\n";
    *this = obj;
}

Animal& Animal::operator=(const Animal& other){
    std::cout << "Copy assignment operator for class Animal called\n";
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

Animal::~Animal(){
    std::cout << "Destructor of class Animal called\n";
}

void    Animal::makeSound(void) const{
    std::cout << "Unknown animal noises. Please find out the type of the animal first.\n";
}

std::string Animal::getType(void) const{
    return type;
}

void    Animal::setType(std::string type){
    this->type = type;
}
