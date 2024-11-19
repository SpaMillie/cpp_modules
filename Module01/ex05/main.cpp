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

int main(void)
{
   Harl ey;

   ey.complain("debug");
   ey.complain("info");
   ey.complain("warning");
   ey.complain("error");
   ey.complain("etc");
   ey.complain("errrrrror");
   ey.complain("debuging");
   ey.complain("0");
   ey.complain("");
   ey.complain("\n");
}
