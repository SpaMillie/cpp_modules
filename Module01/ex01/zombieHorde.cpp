/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:13:38 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/20 19:40:57 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *the_horde = nullptr;
    int i = 0;
    try
    {
        the_horde = new Zombie[N];
        while (i < N)
        {
            the_horde[i].set_name(name);
            i++;
        }
        return (the_horde);
    }
    catch(const std::bad_alloc &e)
    {
        std::cout << "Allocation failed: " << e.what() << '\n';
        exit(1);
    }
}
