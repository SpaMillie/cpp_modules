/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:12:41 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/16 20:16:51 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name_one, Weapon& cur_one) : name(name_one), wRef(cur_one) {}

HumanA::~HumanA(){
    std::cout << name << " died.\n";
}

void HumanA::attack(void) const{
    std::cout << name << " attacks with their " << wRef.getType() << std::endl;
}
