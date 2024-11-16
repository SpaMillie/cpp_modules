/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:57:34 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/16 20:15:28 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    name = "<name>";
}

Zombie::~Zombie(){
    std::cout << Zombie::name << " has been destroyed.\n";
}

void    Zombie::set_name(std::string z_name)
{
    name = z_name;
}

void    Zombie::announce(void) const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
