/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:30:37 by mspasic           #+#    #+#             */
/*   Updated: 2024/10/31 13:11:04 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <cstring>

class PhoneBook
{
private:
    Contact array[8];
public:
    // void    getting_contacts() const;
    void    add_contact(Contact current, int i);
};

//add.cpp
int add_chosen(PhoneBook *cur, int i, bool *pb_full);
//utils.cpp
void    abrupt_exit(void);
int get_case(const char *str);



#endif