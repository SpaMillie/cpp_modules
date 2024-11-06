/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:57:34 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/06 11:47:08 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string    Zombie::get_name(void)
{
    return z_name;
}

void    Zombie::announce(void)
{
    std::cout << ": BraiiiiiiinnnzzzZ...\n"; //copy paste the brainz part
}

Zombie::Zombie(std::string name): z_name(name)
{
   std::cout << Zombie.get_name() << Zombie.announce(); 
}
