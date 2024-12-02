/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:12 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/02 16:19:56 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "A kitten was born!\n";
    this->setType("Cat");
    thoughts = new Brain(type);
}

Cat::Cat(const Cat& obj):Animal(obj){
    std::cout << "Copy constructor for class Cat called\n";
    *this = obj;
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "Copy assignment operator for class Cat called\n";
    if (this == &other)
        return (*this);
    delete this->thoughts;
    this->setType(other.getType());
    this->thoughts = new Brain(type);
    return (*this);
}

Cat::~Cat(){
    delete thoughts;
    std::cout << "Trigger warning: a kitty has died :(\n";
}

void    Cat::makeSound(void) const{
    std::cout << "Meow! Meow!\n";
}

std::string Cat::getAnIdea(int index) const{
    if (index < 0)
        index = 0;
    else if (index > 99)
        index = 99;
    return (thoughts->getAnIdea(index));
}
