/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:04:34 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/01 14:57:11 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"
#include "include/Contact.hpp"


void    PhoneBook::add_contact(Contact current, int i)
{
    array[i] = current;
}

std::string    PhoneBook::PB_l_name(int i) const
{
    return array[i].get_l_name();
}

void    PhoneBook::init_size(void)
{
    cur_size = 0;
}

void    PhoneBook::increase_size(void)
{
    cur_size++;
}
int    PhoneBook::get_size(void)
{
    return cur_size;
}
