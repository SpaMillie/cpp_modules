/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:16:32 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/01 14:49:53 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"
#include <limits>

static int check_num(std::string value)
{
    std::cout << value.size() << " checking size\n";
    if (value.size() == 0 || value.size() != 10)
        return (1);
    for (unsigned long i = 0; i < value.size(); i++)
    {
        if (!(value[i] >= '0' && value[i] <= '9'))
            return (1);
    }
    return (0); 
}

static int check_name(std::string value)
{
    if (value.size() == 0 || value.size() > 50)
        return (1);
    for (unsigned long i = 0; i < value.size(); i++)
    {
        if (!(value[i] >= 'A' && value[i] <= 'Z') && \
            !(value[i] >= 'a' && value[i] <= 'z'))
            return (1);
    }
    return (0);
}

static void    output_error_msg(int val)
{
    switch(val)
    {
        case 0:
            std::cout << "Please use only letters and give one first name.\n";
            break;
        case 1:
            std::cout << "Please use only letters and give one last name.\n";
            break;
        case 2:
            std::cout << "Please use only letters and give the nickname as one word.\n";
            break;
        case 3:
            std::cout << "Please input exactly 10 digits only.\n";
            break;
    }
}

static void    output_msg(int val)
{
    switch(val)
    {
        case 0:
            std::cout << "First name: ";
            break;
        case 1:
            std::cout << "Last name: ";
            break;
        case 2:
            std::cout << "Nickname: ";
            break;
        case 3:
            std::cout << "Phonenumber: ";
            break;             
        case 4:
            std::cout << "Darkest secret: ";
            break;
    }
}

static std::string setnmatch(int val)
{
    std::string data;

    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    while (1)
    {
        output_msg(val);
        std::getline(std::cin, data, '\n');
        if (std::cin.eof())
        {
            std::cout << "\n";
            abrupt_exit();
        }
        std::cout << data << " cehcking value\n";
        if ((val < 3 && check_name(data) == 0) || (val == 3 && check_num(data) == 0) || (val == 4 && data.size() != 0))
            break ;
        output_error_msg(val);
    }
    return (data);
}

int add_chosen(PhoneBook *cur, int i)
{
    std::string nm;
    Contact current;

    if (i == 8)
        i = 0;
    current.set_name(setnmatch(0));
    current.set_l_name(setnmatch(1));
    current.set_n_name(setnmatch(2));
    current.set_num(setnmatch(3));
    current.set_secr(setnmatch(4));
    cur->add_contact(current, i);
    if (cur->get_size() < 7)
        cur->increase_size();
    std::cout<< "Contact sucessfully added!\n";
    return (i);
}
