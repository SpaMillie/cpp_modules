/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:52:04 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/20 19:41:17 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
}

void    Harl::info(void)
{
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n\n";
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n\n";
}

void    Harl::complain(std::string level)
{
    int dig_level = 0;
    void(Harl::*ptr)(void) = nullptr;
    std::string arr[] =  {"error", "warning", "info", "debug"};

    if (level.empty())
    {
        std::cout << "Error: Invalid level\n";
        return ;
    }    
    for (int i = 0; i < 4; i++)
    {
        if (level == arr[i])
        {
            dig_level = i + 2;
            break ;
        }
    }
    switch (dig_level)
    {
        case (5):
            ptr = &Harl::debug;
            break;
        case (4):
            ptr = &Harl::info;
            break;
        case (3):
            ptr = &Harl::warning;
            break;
        case (2):
            ptr = &Harl::error;
            break;
        default:
            std::cout << "Can't complain :3\n";
            return ;
    }
    (this->*ptr)();
    if (dig_level > 2)
        complain(arr[dig_level - 3]);
}
