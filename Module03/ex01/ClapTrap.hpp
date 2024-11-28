/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:23:21 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/28 13:35:09 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

//set const what can be  consst

class ClapTrap {
    private:
        std::string name;
        unsigned int hit_pts; //camel or snake??????
        unsigned int energy_pts;
        unsigned int attack_dmg;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad);
        ClapTrap(const ClapTrap& obj);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();
        virtual void            attack(const std::string& target);
        virtual void            takeDamage(unsigned int amount);
        virtual void            beRepaired(unsigned int amount);
        // void            attacks_the_other(ClapTrap& other);
        std::string     get_name(void) const;
        unsigned int    get_int(int whichone) const;
        void            set_name(std::string name);
        void            set_int(int whichone, unsigned int value);
};

#endif