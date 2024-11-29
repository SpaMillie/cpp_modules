/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:23:59 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/29 15:32:24 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("unknown"){
    std::cout << "Default constructor of class Animal called\n";
}

// Animal::Animal(std::string type):type(type){
//     std::cout << "Custom constructor of class Animal called\n";
// }

Animal::Animal(const Animal& obj){
    std::cout << "Copy constructor of class Animal called\n";
    *this = obj;
}

Animal& Animal::operator=(const Animal& other){
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

Animal::~Animal(){
    std::cout << "Destructor of class Animal called\n";
}

void    Animal::make_sound(void) const{
    std::cout << "Unknown animal noises. Please consult the bestiary for the exact type first.\n";
}

std::string Animal::get_type(void) const{
    return type;
}

void    Animal::set_type(std::string type){
    this->type = type;
}
