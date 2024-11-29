/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:30 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/29 15:40:05 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("unknown"){
    std::cout << "Default constructor of class WrongAnimal called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj){
    std::cout << "Copy constructor of class WrongAnimal called\n";
    *this = obj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

WrongAnimal::~WrongAnimal(){
    std::cout << "Destructor of class WrongAnimal called\n";
}

void    WrongAnimal::make_sound(void) const{
    std::cout << "Unknown weird animal noises. Please consult the bestiary for the exact type first.\n";
}

std::string WrongAnimal::get_type(void) const{
    return type;
}

void    WrongAnimal::set_type(std::string type){
    this->type = type;
}

