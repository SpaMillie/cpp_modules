/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:57:57 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/08 17:45:41 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie *new_one;

    new_one = new (std::nothrow) Zombie(name);
    if (!new_one)
        std::cout << "Memory allocation failed.\n";
    return (new_one);
}
