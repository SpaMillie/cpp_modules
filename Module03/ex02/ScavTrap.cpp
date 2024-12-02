/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:07:19 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/02 11:12:19 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(" ", 100, 50, 20){
    std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20){
    std::cout << "ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& obj):ClapTrap(obj){
    std::cout << "ScavTrap copy constructor called\n";
    *this = obj;
}

ScavTrap&  ScavTrap::operator=(const ScavTrap& other){
    std::cout << "ScavTrap copy assignment operator called\n"; 
    if (this == &other)
        return (*this);
    this->name = other.name;
    this->hit_pts = other.hit_pts;
    this->energy_pts = other.energy_pts;
    this->attack_dmg = other.attack_dmg;
    return (*this);
}

ScavTrap::~ScavTrap(){
    std::cout << this->get_name() << " : destructor called\n";
}

void    ScavTrap::guardGate(void) const{
    std::cout << "ScavTrap " << this->get_name() << " got a temporary reassignment as a gateguard. GUARD WELL, BOY!\n";
}

void    ScavTrap::attack(const std::string& target){
    if (this->energy_pts > 0 && this->hit_pts > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target <<  " causing points of damage!\n";
        this->energy_pts--;
    }
    else 
    {
        if (this->energy_pts == 0)
            std::cout << "ScavTrap " << this->name << " is out of energy points.\n";
        if (this->hit_pts == 0)
            std::cout << "ScavTrap " << this->name << " is out of hit points.\n";
    }
}

void ScavTrap::attacks_the_other(ScavTrap& other)
{
    int randomNum = rand() % 51;
    this->attack(other.get_name());
    if (this->get_int(1) != 0 && this->get_int(2) != 0)
        other.takeDamage(randomNum);
}
