/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:12 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/29 15:33:55 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    this->set_type("Cat");
    std::cout << "A kitten was born!\n";
}

Cat::Cat(const Cat& obj){
    *this = obj;
}

Cat& Cat::operator=(const Cat& other){
    if (this == &other)
        return (*this);
    this->set_type(other.get_type());
    return (*this);
}

Cat::~Cat(){
    std::cout << "Trigger warning: a kitty has died :(\n";
}

void    Cat::make_sound(void) const{
    std::cout << "Meow! Meow!\n";
}
