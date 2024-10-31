/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:04:34 by mspasic           #+#    #+#             */
/*   Updated: 2024/10/31 10:23:15 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"
#include "include/Contact.hpp"


void    PhoneBook::add_contact(Contact current, int i)
{
    array[i] = current;
}


