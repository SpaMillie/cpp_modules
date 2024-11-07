/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:31:29 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/07 09:30:15 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

/*starting off with an easy exercise, this one is about
taking in lowercase characters and making them uppercase*/

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; argv[i][j] != '\0'; j++)
                    argv[i][j] = std::toupper(argv[i][j]);
            std::cout <<  argv[i];
            if (i + 1 == argc)
                std::cout << std::endl;
            else
                std::cout << " ";
        }
    }
}
