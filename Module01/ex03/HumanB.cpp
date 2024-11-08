/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:42:58 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/08 18:45:56 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_one){
    name = name_one;
}

HumanB::~HumanB(){
    std::cout << name << " died.\n";
}

void HumanB::attack(void){
    std::cout << name << " attacks with their " << cur.getType() << std::endl;
}

void    HumanB::setWeapon(Weapon cur_one){
    cur = cur_one;
}
