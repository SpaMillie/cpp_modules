/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:30:37 by mspasic           #+#    #+#             */
/*   Updated: 2024/10/25 18:07:14 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "include/Contact.hpp"
# include <iostream>
# include <cstring>

class PhoneBook
{
private:
    Contact array[8];
public:
    // void    getting_contacts() const;
    void    add_contact(Contact current);
};


//utils.cpp
int abrupt_exit(void);
int get_case(const char *str);



#endif