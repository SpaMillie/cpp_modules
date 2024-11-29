/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:24:40 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/29 18:49:23 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name(" "), hit_pts(10), energy_pts(10), attack_dmg(0){
    std::cout <<  "ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap(std::string name):name(name), hit_pts(10), energy_pts(10), attack_dmg(0){
    std::cout <<  "ClapTrap named constructor called\n";
}

ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad):name(name), hit_pts(hp), energy_pts(ep), attack_dmg(ad){
    std::cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& obj){
    std::cout <<  "ClapTrap copy constructor called\n";
    *this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
    std::cout <<  "ClapTrap copy assignment operator called\n";
    if (this == &other)
        return (*this);
    this->name = other.name;
    this->hit_pts = other.hit_pts;
    this->energy_pts = other.energy_pts;
    this->attack_dmg = other.attack_dmg;
    return (*this);
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called\n";
}

void    ClapTrap::attack(const std::string& target){
    if (this->energy_pts > 0 && this->hit_pts > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target <<  " causing points of damage!\n";
        this->energy_pts--;
    }
    else 
    {
        if (this->energy_pts == 0)
            std::cout << "ClapTrap " << this->name << " is out of energy points.\n";
        if (this->hit_pts == 0)
            std::cout << "ClapTrap " << this->name << " is out of hit points.\n";
    }
}

void    ClapTrap::takeDamage(unsigned int amount){
    if (this->energy_pts > 0 && this->hit_pts > 0)
    {
        if (amount > this->hit_pts)
            amount = this->hit_pts;
        std::cout << "ClapTrap " << this->name << " receives " << amount <<  " points of damage!\n";
        this->hit_pts -= amount;
        this->attack_dmg += amount;
    }
    else 
    {
        if (this->energy_pts == 0)
            std::cout << "ClapTrap " << this->name << " is out of energy points.\n";
        if (this->hit_pts == 0)
            std::cout << "ClapTrap " << this->name << " is out of hit points.\n";
    }
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (this->energy_pts > 0 && this->hit_pts > 0)
    {
        std::cout << "ClapTrap " << this->name << " repairs itself by " << amount <<  " points\n";
        this->energy_pts--;
        this->hit_pts += amount;
    }
    else 
    {
        if (this->energy_pts == 0)
            std::cout << "ClapTrap " << this->name << " is out of energy points.\n";
        if (this->hit_pts == 0)
            std::cout << "ClapTrap " << this->name << " is out of hit points.\n"; 
    }
}

std::string ClapTrap::get_name(void) const{
    return this->name;
}

void    ClapTrap::set_name(std::string name){
    this->name = name;
}

unsigned int ClapTrap::get_int(int whichone) const{
    switch(whichone){
        case 1:
            return this->hit_pts;
        case 2:
            return this->energy_pts;
        case 3:
            return this->attack_dmg;
        default:
            return 100;
    }
}

void    ClapTrap::set_int(int whichone, unsigned int value) {
    switch(whichone){
        case 1:
            this->hit_pts = value;
            break;
        case 2:
            this->energy_pts = value;
            break;
        case 3:
            this->attack_dmg = value;
            break;
        default:
            break;
    }
}
