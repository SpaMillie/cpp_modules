/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:24:40 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/25 14:44:34 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name(" "), hit_pts(10), energy_pts(10), attack_dmg(0){}

ClapTrap::ClapTrap(std::string name):name(name), hit_pts(10), energy_pts(10), attack_dmg(0){}

ClapTrap::ClapTrap(const ClapTrap& obj){
    *this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
    if (this == &other)
        return (*this);
    this->name = other.name;
    this->hit_pts = other.hit_pts;
    this->energy_pts = other.energy_pts;
    this->attack_dmg = other.attack_dmg;
    return (*this);
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor called\n";
}

void    ClapTrap::attack(const std::string& target){
    if (this->energy_pts > 0 && this->hit_pts > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target <<  " causing 3 points of damage!\n";
        this->energy_pts--;
    }
}

void    ClapTrap::takeDamage(unsigned int amount){
    if (this->energy_pts >= 0 && this->hit_pts > 0)
    {
        std::cout << "ClapTrap " << this->name << " receives " << amount <<  " points of damage!\n";
        if (amount > this->hit_pts)
            this->hit_pts = 0;
        else
            this->hit_pts -= amount;
    }
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (this->energy_pts > 0 && this->hit_pts > 0)
    {
        std::cout << "ClapTrap " << this->name << " repairs itself by " << amount <<  " points\n";
        this->energy_pts--;
        this->hit_pts += amount;
    }
}


std::string ClapTrap::get_name(void){
    return this->name;
}

unsigned int ClapTrap::get_int(int whichone){
    switch(whichone){
        case 1:
            return this->hit_pts;
        case 2:
            return this->energy_pts;
        case 3:
            return this->attack_dmg;
    }
}