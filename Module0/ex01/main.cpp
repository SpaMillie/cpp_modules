/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:57:28 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/01 13:46:47 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"

/*a program called phonebook that can be used to store
up to 8 contacts, stores the contacts statically, outputs
the existing contacts on request, and exits cleanly whether
by inputting EXIT or using ctrl+c*/

void    signalHandler(int signum)
{
    std::cout << "\nyou KICK miette???\nyou kick her body like a football?? \noh! oh! jail for mother! jail for mother for One Thousand Years!!!\n";
    exit (signum);
}

int main(void)
{
    PhoneBook current;
    std::string data;
    const char *cc_data;
    int  case_num;
    int  i = 0;
    bool pb_full = false;

    signal(SIGINT, signalHandler);
    signal(SIGQUIT, signalHandler);
    // try {
        std::cout << "Welcome to the PHONEBOOK!\nPlease choose one of the following three commands: \nADD, SEARCH, or EXIT\nChoose now:\n";
        while (1)
        {
            std::getline(std::cin, data);
            if (std::cin.eof())
                abrupt_exit();
            // std::cin.ignore();
            //doing things complicatedly to make it more cpp
            cc_data = data.c_str();
            case_num = get_case(cc_data);
            switch(case_num)
            {
                case 1: i = add_chosen(&current, i, &pb_full); i++; break;
                case 2: std::cout << "search_chosen(&current, i, &pb_full)\n"; break;
                case 3: std::cout << "Bye, bye\n"; return (0);
            }
            std::cout << "Please choose one of the following three commands: ADD, SEARCH, or EXIT\nChoose now:\n"; break;
        }
}
