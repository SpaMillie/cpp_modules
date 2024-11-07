/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:13:38 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/07 18:21:36 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"
// #include <new>

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *the_horde;
    int i = 0;
    try
    {
        the_horde = new Zombie[N]; //make_unique or unique_ptr look up
    }
    catch(const std::bad_alloc &e)
    {
        std::cerr << e.what() << '\n';
        while (i > -1)
        {
            i--;
            delete the_horde;
        }
    }
    while (i < N)
    {
        the_horde[i] = new Zombie(name);
        i++;
    }
    return (the_horde);
}
