/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:04:34 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/05 15:50:17 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"
#include "include/Contact.hpp"


void    PhoneBook::add_contact(Contact current, int i)
{
    array[i] = current;
}

std::string    PhoneBook::pb_name(int i) const
{
    return array[i].get_name();
}

std::string    PhoneBook::pb_l_name(int i) const
{
    return array[i].get_l_name();
}

std::string    PhoneBook::pb_n_name(int i) const
{
    return array[i].get_n_name();
}

std::string    PhoneBook::pb_num(int i) const
{
    return array[i].get_num();
}

std::string    PhoneBook::pb_secret(int i) const
{
    return array[i].get_secr();
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

size_t  PhoneBook::str_len(size_t check, int i) 
{
    switch (check)
    {
        case 0: check = array[i].get_name().size(); break;
        case 1: check = array[i].get_l_name().size(); break;
        case 2: check = array[i].get_n_name().size(); break;
    }
    return (check);
}
