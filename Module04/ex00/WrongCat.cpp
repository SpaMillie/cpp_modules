/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:36 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/29 17:38:14 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    this->setType("WrongCat");
    std::cout << "A wrongkitten was born!\n";
}

WrongCat::WrongCat(const WrongCat& obj){
    *this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
    if (this == &other)
        return (*this);
    this->setType(other.getType());
    return (*this);
}

WrongCat::~WrongCat(){
    std::cout << "Trigger warning: a wrongkitty has died\n";
}

void    WrongCat::makeSound(void) const{
    std::cout << "Meow! Meow!\n";
}
