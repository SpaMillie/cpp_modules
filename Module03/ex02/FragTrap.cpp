/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:02:00 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/29 12:03:50 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(" ", 100, 100, 30){
    std::cout << "FragTrap default constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30){
    std::cout << "FragTrap constructor called\n";
}

FragTrap::FragTrap(const FragTrap& obj){
    std::cout << "FragTrap copy constructor called\n";
    *this = obj;
}

FragTrap&  FragTrap::operator=(const FragTrap& other){
    std::cout << "FragTrap copy assignment operator called\n"; 
    if (this == &other)
        return (*this);
    this->name = other.name;
    this->hit_pts = other.hit_pts;
    this->energy_pts = other.energy_pts;
    this->attack_dmg = other.attack_dmg;
    return (*this);
}

FragTrap::~FragTrap(){
    std::cout << this->get_name() << " : destructor called\n";
}

void    FragTrap::highFivesGuys(void) const{
    std::cout << this->get_name() << " gets a high five, they get a high five, you all get a HIGH FIVE!\n";
}

void    FragTrap::attack(const std::string& target){
    if (this->energy_pts > 0 && this->hit_pts > 0)
    {
        std::cout << "FragTrap " << this->name << " attacks " << target <<  " causing points of damage!\n";
        this->energy_pts--;
    }
    else 
    {
        if (this->energy_pts == 0)
            std::cout << "FragTrap " << this->name << " is out of energy points.\n";
        if (this->hit_pts == 0)
            std::cout << "FragTrap " << this->name << " is out of hit points.\n";
    }
}

void    FragTrap::takeDamage(unsigned int amount){
    if (this->energy_pts > 0 && this->hit_pts > 0)
    {
        if (amount > this->hit_pts)
            amount = this->hit_pts;
        std::cout << "FragTrap " << this->name << " receives " << amount <<  " points of damage!\n";
        this->hit_pts -= amount;
        this->attack_dmg += amount;
    }
    else 
    {
        if (this->energy_pts == 0)
            std::cout << "FragTrap " << this->name << " is out of energy points.\n";
        if (this->hit_pts == 0)
            std::cout << "FragTrap " << this->name << " is out of hit points.\n";
    }
}

void    FragTrap::beRepaired(unsigned int amount){
    if (amount > 10)
        amount = 10;
    if (this->energy_pts > 0 && this->hit_pts > 0)
    {
        std::cout << "FragTrap " << this->name << " repairs itself by " << amount <<  " points\n";
        this->energy_pts--;
        this->hit_pts += amount;
    }
    else 
    {
        if (this->energy_pts == 0)
            std::cout << "FragTrap " << this->name << " is out of energy points.\n";
        if (this->hit_pts == 0)
            std::cout << "FragTrap " << this->name << " is out of hit points.\n"; 
    }
}

void FragTrap::attacks_the_other(FragTrap& other)
{
    int randomNum = rand() % 51;
    this->attack(other.get_name());
    if (this->get_int(1) != 0 && this->get_int(2) != 0)
        other.takeDamage(randomNum);
}
