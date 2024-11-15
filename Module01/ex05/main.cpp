/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:20:34 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/14 16:35:17 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
   Harl ey;

    void (Harl::*ptr)(std::string level);
    ptr = &Harl::complain;
   (ey.*ptr)("1");
   (ey.*ptr)("2");
   (ey.*ptr)("3");
   (ey.*ptr)("4");
   (ey.*ptr)("12");
   (ey.*ptr)("23");
   (ey.*ptr)("1");
   (ey.*ptr)("0");
   (ey.*ptr)("");
   (ey.*ptr)("\n");
}
