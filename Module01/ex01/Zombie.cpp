/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:57:34 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/08 10:36:59 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

Zombie::Zombie(){
    z_name = "<name>";
}

Zombie::~Zombie(){
    std::cout << Zombie::z_name << " has been unalived.\n";
}

void    Zombie::set_name(std::string name)
{
    z_name = name;
}

void    Zombie::announce(void) const
{
    std::cout << z_name << ": BraiiiiiiinnnzzzZ...\n";
}
