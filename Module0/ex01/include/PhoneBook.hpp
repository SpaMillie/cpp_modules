/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:30:37 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/01 13:45:56 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp" //maybe you dont need some of these?
# include <iostream>
# include <string>
# include <cstring>
# include <csignal>
// #include <signal.h>

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