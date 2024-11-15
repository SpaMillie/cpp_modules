/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:52:04 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/14 16:55:17 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void    Harl::info(void)
{
    std::cout << "\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void    Harl::warning(void)
{
    std::cout << "\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void    Harl::error(void)
{
    std::cout << "\nThis is unacceptable! I want to speak to the manager now.\n";
}

void    Harl::complain(std::string level)
{
    int dig_level = 0;

    try 
    {
        dig_level = stoi(level);
    }
    catch()
    switch (dig_level)
    {
    case (1):
        Harl::debug();
        break;
    case (2):
        Harl::info();
        break;
    case (3):
        Harl::warning();
        break;
    case (4):
        Harl::error();
        break;
    default:
        std::cout << "\nAll good\n";
        break;
    }
}
