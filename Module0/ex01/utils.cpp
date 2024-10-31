/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:01:43 by mspasic           #+#    #+#             */
/*   Updated: 2024/10/31 10:26:06 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Contact.hpp" //both of these every time or is PB.hpp enough?
#include "include/PhoneBook.hpp"

int    abrupt_exit(void)
{
    std::cout << "Rude.\n";
    return (1);
}

int get_case(const char *str)
{
    int num;

    if (std::strcmp("ADD", str) == 0)
        num = 1;
    else if (std::strcmp("SEARCH", str) == 0)
        num = 2;
    else if (std::strcmp("EXIT", str) == 0)
        num = 3;
    else
        num = 4;
    return (num);
}
