/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:13:38 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/08 16:44:32 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"
// #include <new>

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *the_horde = nullptr;
    int i = 0;
    try
    {
        the_horde = new Zombie[N]; //make_unique or unique_ptr look up
        while (i < N)
        {
            the_horde[i].set_name(name);
            i++;
        }
        return (the_horde);
    }
    catch(const std::bad_alloc &e)
    {
        std::cerr << "Allocation failed: " << e.what() << '\n';
        exit(1);
    }
}
