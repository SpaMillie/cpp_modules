/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:02:38 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/16 17:44:53 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    //testing the best ways to allocate new variables
    //test #1: using heap
    Zombie *random_guy;

    random_guy = newZombie("Odysseus");
    if (random_guy)
        random_guy->announce();
    if (random_guy)
        delete(random_guy);
    //test #2: using stack
    randomChump("Penelope");
}
