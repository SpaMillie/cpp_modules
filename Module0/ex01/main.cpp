/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:57:28 by mspasic           #+#    #+#             */
/*   Updated: 2024/10/24 20:10:21 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Contact.hpp"
#include "include/PhoneBook.hpp"

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

void    starting(void)
{
    std::string data;
    PhoneBook cur;
    unsigned int i = 0;

    std::cout << "Welcome to the PHONEBOOK! Please choose one of the three commands: ADD, SEARCH, or EXIT\n";
    while (1)
    {
        if (i > 7)
            i = i % 7;
        std::cout << i << "\n";
        if (std::cin.eof())
        {
            std::cout << "firstNaughty, naughty...\n";
            return ;
        }
        std::cin >> data;
        if (std::cin.eof())
        {
            std::cout << "secondNaughty, naughty...\n";
            return ;
        }
        if (data == "ADD")
        {
            std::cout << "Adding contact\n";
           ft_add(&cur.array[i]); 
        }
        else if (data == "EXIT")
        {
            std::cout << "Bye bye!\n";
            return ;
        }
        else if (data == "SEARCH")
            std:: cout << "Searching\n";
        else
            std::cout << "No.\n";
        i++;
    }
}

int main(int argc, char **argv)
{
   (void)argv; 
    if (argc == 1)
        starting();
    else
        std::cout << "Patience, child. To use the PHONEBOOK you don't need to provide any arguments.\n";
}
