/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:57:28 by mspasic           #+#    #+#             */
/*   Updated: 2024/10/31 12:19:25 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"

/*a program called phonebook that can be used to store
up to 8 contacts, stores the contacts statically, outputs
the existing contacts on request, and exits cleanly whether
by inputting EXIT or using ctrl+c*/

int main(void)
{
   PhoneBook current;
   std::string data;
   const char *cc_data;
   int  case_num;
   int  i = 0;
   bool pb_full = false;

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
            case 1: i = add_chosen(&current, i, &pb_full); i++; break;
            case 2: std::cout << "search_chosen(&current, i, &pb_full)\n"; break;
            case 3: std::cout << "Bye, bye\n"; return (0);
            default: std::cout << "Um. Let's try again.\nRemember: choose ADD, SEARCH, or EXIT.\n"; break;
        }
    }
   
}
