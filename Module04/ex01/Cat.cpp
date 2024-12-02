/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:12 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/02 12:19:20 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    this->setType("Cat");
    try {
        std::cout << "A kitten was born!\n";
        ideas = new Brain();
    }
    catch (const std::bad_alloc& e)
    {
        std::cout << "Allocation failed: " << e.what() << std::endl; //how to make this safe?
    }
}

Cat::Cat(const Cat& obj):Animal(obj){
    std::cout << "Copy constructor for class Cat called\n";
    *this = obj;
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "Copy assignment operator for class Cat called\n";
    if (this == &other)
        return (*this);
    this->setType(other.getType());
    return (*this);
}

Cat::~Cat(){
    delete[] ideas;
    std::cout << "Trigger warning: a kitty has died :(\n";
}

void    Cat::makeSound(void) const{
    std::cout << "Meow! Meow!\n";
}
