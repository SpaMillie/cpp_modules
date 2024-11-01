/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:30:37 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/01 17:30:37 by mspasic          ###   ########.fr       */
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
    int cur_size;
public:
    std::string pb_name(int i) const;
    std::string pb_l_name(int i) const;
    std::string pb_n_name(int i) const;
    std::string pb_num(int i) const;
    std::string pb_secret(int i) const;
    void        add_contact(Contact current, int i);
    void        init_size(void);
    void        increase_size(void);
    int         get_size(void);
    size_t      str_len(size_t check, int i);
};

//add.cpp
int     add_chosen(PhoneBook *cur, int i);
//search.cpp
void    search_chosen(PhoneBook *cur, int i); 
//utils.cpp
void    abrupt_exit(void);
int get_case(const char *str);



#endif