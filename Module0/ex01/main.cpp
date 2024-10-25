/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:57:28 by mspasic           #+#    #+#             */
/*   Updated: 2024/10/25 18:28:29 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Contact.hpp"
#include "include/PhoneBook.hpp"
#include <string>
#include <cstring>

/*a program called phonebook that can be used to store
up to 8 contacts, stores the contacts statically, outputs
the existing contacts on request, and exits cleanly whether
by inputting EXIT or using ctrl+c*/

// void ft_add(PhoneBook *cur)
// {
//     std::string nm;
//     // std::string l_nm;
//     // std::string n_nm;
//     // std::string num;
//     // std::string scrt;

//     while (check_name(nm))
//     {
//         std::cout << "Input first name: ";
//         std::cin >> nm;
//         std::cout << "\n";
//     }
    
// }

//add
int check_num(std::string value)
{
    if (value.size() == 0 || value.size() != 10)
        return (1);
    for (int i = 0; i < value.size(); i++)
    {
        if (!(value[i] >= '0' && value[i] <= '9'))
            return (1);
    }
    return (0); 
}
//add
int check_name(std::string value)
{
    if (value.size() == 0 || value.size() > 50)
        return (1);
    for (int i = 0; i < value.size(); i++)
    {
        if (!(value[i] >= 'A' && value[i] <= 'Z') && \
            !(value[i] >= 'a' && value[i] <= 'z'))
            return (1);
    }
    return (0);
}
//add
void    output_msg(int val)
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
//add
std::string setnmatch(int val)
{
    std::string data;

    while (1)
    {
        output_msg(val);
        std::cin >> data;
        if (std::cin.eof()) //should this exit completely; returning 1
        {
            abrupt_exit();
            return (NULL);
        }
        if (check_name(data) == 0)
            break ;
        std::cout << "Invalid value: Please use only letters.\n";
    }
    return (data);
}
//add
int    add_chosen(PhoneBook *cur, int i)
{
    std::string nm;
    Contact current;

    if (i > 7)
        i = i % 7;
    current.set_name(setnmatch(0));
    current.set_l_name(setnmatch(1));
    current.set_n_name(setnmatch(2));
    current.set_num(setnmatch(3));
    // current.set_secr(top_secreting());
    cur->add_contact(current);
}

int main(void)
{
   PhoneBook current;
   std::string data;
   const char *cc_data;
   int  case_num;
   int  i = 0;

    std::cout << "Welcome to the PHONEBOOK!\n \
        Please choose one of the following three commands: \n \
        ADD, SEARCH, or EXIT\nChoose now:\n";
    while (1)
    {
        std::cin >> data;
        if (std::cin.eof())
            return (abrupt_exit());
        //doing things complicatedly to make it more cpp
        cc_data = data.c_str();
        case_num = get_case(cc_data);
        switch(case_num)
        {
            case 1: add_chosen(&current, i); i++; break;
            case 2: std::cout << "search_chosen(&current)\n"; break;
            case 3: std::cout << "Bye, bye\n"; return ;
            default: std::cout << "Um. Let's try again. \
                Remember:choose ADD, SEARCH, or EXIT.\n"; break;
        }
    }
   
}
