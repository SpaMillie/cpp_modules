/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:30 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/02 14:18:35 by mspasic          ###   ########.fr       */
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
    std::cout << "Copy assignment operator for class WrongAnimal called\n";
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

WrongAnimal::~WrongAnimal(){
    std::cout << "Destructor of class WrongAnimal called\n";
}

void    WrongAnimal::makeSound(void) const{
    std::cout << "\nWarning: Unfamiliar noise detected.\nPlease be aware that your safety has most likely been compromised.\nThe secret government alien shelter closest to you has been notified of the alien creature's presence.\nPlease note that the secret government is NOT under legal obligation to ensure your safety or notify your loved ones in case of sudden death.\nHave a nice day!\n\n";
}

std::string WrongAnimal::getType(void) const{
    return type;
}

void    WrongAnimal::setType(std::string type){
    this->type = type;
}

