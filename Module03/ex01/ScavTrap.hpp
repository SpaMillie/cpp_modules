/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:45:03 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/28 13:29:24 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& obj);
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap();
        void    guardGate(void);
        void    attack(const std::string& target) override;
        void    takeDamage(unsigned int amount) override;
        void    beRepaired(unsigned int amount) override;             
};

#endif