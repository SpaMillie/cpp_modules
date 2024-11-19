/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:20:34 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/19 14:43:37 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
   if (argc == 2)
   {
      Harl ey;
      std::string level(argv[1]);
      ey.complain(level);
   }
   else
   {
      std::cout << "[ Probably complaining about insignificant problems ]\n";
   }
}
