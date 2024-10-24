/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:04:34 by mspasic           #+#    #+#             */
/*   Updated: 2024/10/24 19:47:19 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"
#include "include/Contact.hpp"

Contact *set_values()
{        
    name = nm;
    last_name = l_nm;
    nickname = n_nm;
    phonenumber = num;
    darkest_secret = scrt;
    Contact new(name, last_name, nickname, phonenumber, darkest_secret);
    PB[cur] = new;
    return (PB);
}

void    adding_contact(Contact *array)
{

}

