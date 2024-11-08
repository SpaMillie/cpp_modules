/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:57:34 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/08 17:45:58 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
    z_name = name;
};

Zombie::~Zombie(){
    std::cout << Zombie::z_name << " has been unalived.\n";
}

void    Zombie::announce(void)
{
    std::cout << Zombie::z_name << ": BraiiiiiiinnnzzzZ...\n";
}
