/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:51:09 by mspasic           #+#    #+#             */
/*   Updated: 2025/10/03 00:19:28 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RPN.hpp"

int main(int argc, char **argv){
	//checking for correct number of arguments
	if (argc != 2){
		std::cerr << "Error\n";
		return 1;
	}
	try {
		std::string boys(argv[1]);

		RPN tacky_stack;
		tacky_stack.stack_em(boys);
	}
	catch(const std::exception& e){
		std::cerr << "Error\n";
	}
	return 0;
}