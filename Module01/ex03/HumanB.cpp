/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:42:58 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/20 19:41:17 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_one) {
    name = name_one;
    wPtr = nullptr;
}

HumanB::~HumanB(){
    std::cout << name << " died.\n";
}

void HumanB::attack(void) const{
    if (wPtr)
        std::cout << name << " attacks with their " << wPtr->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& cur_one){
    wPtr = &cur_one;
}
