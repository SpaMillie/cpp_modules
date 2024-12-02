/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:19 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/02 16:19:32 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "A doggo was born!\n";
    this->setType("Dog");
    thoughts = new Brain(type);
}

Dog::Dog(const Dog& obj):Animal(obj){
    std::cout << "Copy constructor for class Dog called\n";
    *this = obj;
}

Dog& Dog::operator=(const Dog& other){
    std::cout << "Copy assignment operator for class Dog called\n";
    if (this == &other)
        return (*this);
    delete this->thoughts;
    this->setType(other.getType());
    this->thoughts = new Brain(type);
    return (*this);
}

Dog::~Dog(){
    delete thoughts;
    std::cout << "Trigger warning: a doggo has died :(\n";
}

void    Dog::makeSound(void) const{
    std::cout << "Bork! Bork!\n";
}

std::string Dog::getAnIdea(int index) const{
    if (index < 0)
        index = 0;
    else if (index > 99)
        index = 99;
    return (thoughts->getAnIdea(index));
}
