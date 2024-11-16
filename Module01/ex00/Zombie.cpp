/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:57:34 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/16 17:48:43 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string z_name){
    name = z_name;
};

Zombie::~Zombie(){
    std::cout << Zombie::name << " has been destroyed.\n";
}

void    Zombie::announce(void)
{
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ...\n";
}
