/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:57:34 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/19 15:27:43 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string z_name){
    if (z_name.size() == 0)
        name = "<name>";
    else
        name = z_name;
};

Zombie::~Zombie(){
    std::cout << Zombie::name << " has been destroyed.\n";
}

void    Zombie::announce(void) const{
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ...\n";
}
