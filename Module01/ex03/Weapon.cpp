/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:01:54 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/08 20:41:19 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << "Weapon created without a type\n";
}

Weapon::Weapon(const std::string& new_one){
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
