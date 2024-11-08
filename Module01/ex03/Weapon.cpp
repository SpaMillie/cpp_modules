/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:01:54 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/08 22:48:52 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    type = nullptr;
    std::cout << "Weapon created without a type\n";
}

Weapon::Weapon(std::string new_one){
    type = new_one;
}

Weapon::~Weapon(){
    std::cout << type <<" was destroyed\n";
}

const std::string& Weapon::getType(void){
    return type;
}

void Weapon::setType(std::string new_one){
    type = new_one;
}
