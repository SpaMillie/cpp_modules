/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:20:56 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/01 17:57:29 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"

void	print_contact(int i, PhoneBook *cur)
{
	std::cout << "Printing contact no#" << i << ".\n";
	std::cout << "First name: " << cur->pb_name(i - 1) << "\n";
	std::cout << "Last name: " << cur->pb_l_name(i - 1) << "\n";
	std::cout << "Nickname: " << cur->pb_n_name(i - 1) << "\n";
	std::cout << "Phonenumber: " << cur->pb_num(i - 1) << "\n";
	std::cout << "Darkest secret: " << cur->pb_secret(i - 1) << "\n\n";
}

void	print_info(size_t index, int i, PhoneBook *cur, std::string str)
{
	if (cur->str_len(index, i) > 10)
	{
		for (int y = 0; y < 9; y++)
			std::cout << str[y];
		std::cout << ".";
	}
	else if (cur->str_len(index, i) == 10)
		std::cout << str;
	else
	{
		for (int spaces = 10 - cur->str_len(index, i); spaces > 0; spaces--)
			std::cout << " ";
		for (size_t y = 0; y < cur->str_len(index, i); y++)
			std::cout << str[y];
	}
}

void	print_PB(PhoneBook *cur)
{
	// char	data[50];
	// const char	*cc_str;
	// size_t		i = 0;

	std::cout << " ===========================================\n";
	std::cout << "|  INDEX   |FIRST NAME| LAST NAME| NICKNAME |\n";
	// cc_str = cur->pb_name(i).c_str();
	// std::cout << cc_str << "\n";
	for (int i = 0; i < cur->get_size(); i++)
	{
		std::cout << "|         " << i + 1;
		// std::strncpy(data, cc_str, 45);
		std::cout << "|";
		print_info(0, i, cur, cur->pb_name(i));
		// cc_str = cur->pb_l_name(i).c_str();
		// std::strncpy(data, cc_str, 45);
		std::cout << "|";
		print_info(1, i, cur, cur->pb_l_name(i));
		// cc_str = cur->pb_n_name(i).c_str();
		// std::strncpy(data, cc_str, 45);
		std::cout << "|";
		print_info(2, i, cur, cur->pb_n_name(i));
		std::cout << "|\n";
	}
	std::cout << " ===========================================\n\n";
}

int	check_index(std::string data)
{
	const char *cc_data;
	int	num;

	if (data.size() > 10)
		return (-1);
	cc_data = data.c_str();
	num = std::atoi(cc_data);
	if (num >= 1 && num <= 8)
		return (num);
	return (-1);
}

void    search_chosen(PhoneBook *cur, int i)
{
	
	std::string data;
	int	index;

	if (cur->get_size() == 0)
	{
		std::cout << "There are currently no contacts in the PHONEBOOK.\n\n";
		return ;
	}
	if (i != 0)
		i--;
	while (1)
	{
		print_PB(cur);
		std::cout << "Please provide a valid contact index (from 1 to 8):\n";
		std::getline(std::cin, data);
		if (std::cin.eof())
		{
			// std::cout << "\n";
			abrupt_exit();	
		}
		// std::cout << data << " checking value\n";
		index = check_index(data);
		// std::cout << index << " checking index\n";
		if (index != -1)
		{
			if (index <= cur->get_size())
				print_contact(index, cur);
			else
				std::cout << "A contact under this index has not yet been created.\n\n";
			break ;
		}
	} 
}
