/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:20:34 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/16 20:44:33 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
   Harl ey;

   void (Harl::*ptr)(std::string level);
   ptr = &Harl::complain;
   (ey.*ptr)("debug");
   (ey.*ptr)("info");
   (ey.*ptr)("warning");
   (ey.*ptr)("error");
   (ey.*ptr)("etc");
   (ey.*ptr)("errrrrror");
   (ey.*ptr)("debuging");
   (ey.*ptr)("0");
   (ey.*ptr)("");
   (ey.*ptr)("\n");
}
