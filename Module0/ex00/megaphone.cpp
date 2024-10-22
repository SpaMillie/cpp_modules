/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:31:29 by mspasic           #+#    #+#             */
/*   Updated: 2024/10/22 11:36:43 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
            for(int j = 0; argv[i][j] != '\0'; j++)
            {
                if (argv[i][j] > 96 && argv[i][j] < 123)
                    argv[i][j] -= 32;
            }
            std::cout <<  argv[i];
            if (i + 1 == argc)
                std::cout << std::endl;
            else
                std::cout << " ";
        }
    }
}
