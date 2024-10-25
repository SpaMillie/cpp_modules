/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:57:28 by mspasic           #+#    #+#             */
/*   Updated: 2024/10/25 17:11:41 by mspasic          ###   ########.fr       */
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
int is_letter(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

int check_name(std::string nm)
{
    int i = 0;
    while (is_letter(nm[i]))
        i++;
    if (nm[i] == '\0' && nm.size() != 0)
        return (0);
    return (0);
}

void ft_add(PhoneBook *cur)
{
    std::string nm;
    // std::string l_nm;
    // std::string n_nm;
    // std::string num;
    // std::string scrt;

    while (check_name(nm))
    {
        std::cout << "Input first name: ";
        std::cin >> nm;
        std::cout << "\n";
    }
    
}
//add
int check_name(std::string value)
{
    for (int i = 0; i < value.size(); i++)
    {
        if (!(value[i] >= 'A' && value[i] <= 'Z') && \
            !(value[i] >= 'a' && value[i] <= 'z'))
            return (1);
        i++;
    }
    return (0);
}
//add
void    which_info(int j)
{
    switch(j)
    {
        case(0):
            std::cout << "First name: ";
            break;
        case(1):
            std::cout << "Last name: ";
            break;
        case(2):
            std::cout << "Nickname: ";
            break;
        case(3):
            std::cout << "Phonenumber: ";
            break;
        case(4):
            std::cout << "Darkest secret: ";
            break;
    }
}
//add
int    add_chosen(PhoneBook cur, int i)
{
    std::string nm;
    int check;
    int j = 0;

    if (i > 7)
        i = i % 7;
    while (1)
    {
        std::cin >> nm;
        if (std::cin.eof()) //should this exit completely; returning 1
            return (abrupt_exit());
        if (check_name(nm) == 0)
            break ;
        std::cout << "Invalid value: Please use only letters.\n";
    }
    
}
//utils
int    abrupt_exit(void)
{
    std::cout << "Rude.\n";
    return (1);
}
//utils
int get_case(const char *str)
{
    int num;

    if (std::strcmp("ADD", str) == 0)
        num = 1;
    else if (std::strcmp("SEARCH", str) == 0)
        num = 2;
    else if (std::strcmp("EXIT", str) == 0)
        num = 3;
    else
        num = 4;
    return (num);
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
            case 1: add_chosen(current, i); i++; break;
            case 2: search_chosen(current); break;
            case 3: std::cout << "Bye, bye\n"; return ;
            default: std::cout << "Um. Let's try again. \
                Remember:choose ADD, SEARCH, or EXIT.\n"; break;
        }
    }
   
}
