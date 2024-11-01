/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:20:56 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/01 14:58:28 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"

void	print_contact(int i, PhoneBook *cur)
{
	std::cout << cur->PB_l_name(i) << "\n";
}

int	check_index(std::string data)
{
	const char *cc_data;
	int	num;

	if (data.size() > 10)
		return (0);
	cc_data = data.c_str();
	num = std::atoi(cc_data);
	if (num >= 0 && num <= 7)
		return (1);
	return (0);
}

void    search_chosen(PhoneBook *cur, int i)
{
	std::string data;

	while(1)
	{
		print_PB(cur, i);
		std::cout << "Please provide a valid contact index:\n";
		std::getline(std::cin, data);
		if (std::cin.eof())
		{
			// std::cout << "\n";
			abrupt_exit();	
		}
		std::cout << data << "checking value\n";
		if (check_index(data))
			break ;
	} 
}
