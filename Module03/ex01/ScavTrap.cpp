/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:07:19 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/28 13:49:17 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(" ", 100, 50, 20){
    std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20){
    std::cout << "ScavTrap constructor called\n";
}

void    ScavTrap::guardGate(void){
    std::cout << "I guess ScavTrap " << this->get_name() << " is guarding the gate, whatever that means\n";
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << this->get_name() << " has been destroyed\n";
}

void    ScavTrap::attack(const std::string& target){
    if (this->get_int(2) > 0 && this->get_int(1) > 0)
    {
        std::cout << "ScavTrap " << this->get_name() << " attacks " << target <<  " causing points of damage!\n";
        this->set_int(2, this->get_int(2) - 1);
    }
    else 
    {
        if (this->get_int(2) == 0)
            std::cout << "ScavTrap " << this->get_name() << " is out of energy points.\n";
        if (this->get_int(1) == 0)
            std::cout << "ScavTrap " << this->get_name() << " is out of hit points.\n";
    }
}

void    ScavTrap::takeDamage(unsigned int amount){
    if (this->get_int(2) > 0 && this->get_int(1) > 0)
    {
        if (amount > this->get_int(1))
            amount = this->get_int(1);
        std::cout << "ClapTrap " << this->get_name() << " receives " << amount <<  " points of damage!\n";
        this->set_int(1, this->get_int(1) - amount);
        this->set_int(3, this->get_int(3) + amount);
    }
    else 
    {
        if (this->get_int(2) == 0)
            std::cout << "ClapTrap " << this->get_name() << " is out of energy points.\n";
        if (this->get_int(1) == 0)
            std::cout << "ClapTrap " << this->get_name() << " is out of hit points.\n";
    }
}

void    ScavTrap::beRepaired(unsigned int amount){
    if (amount > 10)
        amount = 10;
    if (this->get_int(2) > 0 && this->get_int(1) > 0)
    {
        std::cout << "ClapTrap " << this->get_name() << " repairs itself by " << amount <<  " points\n";
        this->set_int(2, this->get_int(2) - 1);
        this->set_int(1, this->get_int(1) + amount); 
    }
    else 
    {
        if (this->get_int(2) == 0)
            std::cout << "ClapTrap " << this->get_name() << " is out of energy points.\n";
        if (this->get_int(1) == 0)
            std::cout << "ClapTrap " << this->get_name() << " is out of hit points.\n";
    }
}
