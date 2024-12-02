/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:36 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/02 17:25:49 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    this->setType("WrongCat");
    std::cout << "A wrongkitten was born!\n";
}

WrongCat::WrongCat(const WrongCat& obj):WrongAnimal(obj){
    std::cout << "Copy constructor for class WrongCat called\n";
    *this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
    std::cout << "Copy assignment operator for class WrongCat called\n";
    if (this == &other)
        return (*this);
    this->setType(other.getType());
    return (*this);
}

WrongCat::~WrongCat(){
    std::cout << "Trigger warning: a wrongkitty has died\n";
}

void    WrongCat::makeSound(void) const{
    std::cout << "Woem! Woem!\n";
}
