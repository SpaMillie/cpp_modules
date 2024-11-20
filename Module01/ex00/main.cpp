/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:02:38 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/20 20:02:11 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    //testing the best ways to allocate new variables
    //test #1: using heap
    Zombie *random_guy;

    random_guy = newZombie("Odysseus");
    if (random_guy != nullptr)
        random_guy->announce();
    if (random_guy != nullptr)
        delete(random_guy);
    random_guy = newZombie("");
    if (random_guy != nullptr)
        random_guy->announce();
    if (random_guy != nullptr)
        delete(random_guy);    
    //test #2: using stack
    randomChump("Penelope");
    randomChump("bye");
    randomChump("");
    randomChump("123");
    randomChump("\n");
}
