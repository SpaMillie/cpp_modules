/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:12:53 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/20 20:06:50 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int N = 0;
    Zombie *new_one = zombieHorde(N, "Mr. Meeseeks");
    for (int i = 0; i < N; i++)
        new_one[i].announce();
    delete[] new_one;
    N = 5;
    new_one = zombieHorde(N, "Mr. Meeseeks");
    for (int i = 0; i < N; i++)
        new_one[i].announce();
    delete[] new_one;
    N = -3;
    new_one = zombieHorde(N, "Mr. Meeseeks");
    for (int i = 0; i < N; i++)
        new_one[i].announce();
    delete[] new_one;
}
