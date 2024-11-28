/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:03:02 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/28 18:38:18 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& obj);
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap();
        void    highFivesGuys(void) const;
        void    attack(const std::string& target) override;
        void    takeDamage(unsigned int amount) override;
        void    beRepaired(unsigned int amount) override;             
        void    attacks_the_other(FragTrap& other);
};

#endif