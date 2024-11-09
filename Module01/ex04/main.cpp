/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 23:01:45 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/09 16:42:52 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
   //takes three parameters: a filename + 2 strs s1 and s2
   //open filename and copy its content into a new file filename.replace
   //but if there is s1 somewhere it is replaced by s2
   //cant use string::replace
   //handle errors and unexpected inputs
   //ifstream, ofstream, fstream

    if (argc == 4)
    {
        //code
    }
    else
        std::cout << "Error: Wrong number of arguments given. Please provide 3 arguments.\n";
}