/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:02:38 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/07 17:45:15 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

int main(void)
{
    //testing the best ways to allocate new variables
    //test #1: using heap
    Zombie *random_guy;

    random_guy = newZombie("Odysseus");
    if (random_guy)
        random_guy->announce();
    randomChump("Penelope");
    if (random_guy)
        delete(random_guy);
    //test #2: using stack
}
