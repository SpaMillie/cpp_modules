/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 23:01:45 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/19 15:15:14 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cstring>
#include <new>

int ft_replace(char **argv)
{
    std::fstream filename;
    std::string repl_str(argv[0]);
    repl_str.append(".replace");
    std::string text;
    std::string line;
    size_t n = 0;;
    size_t length;

    filename.open(argv[0], std::ios::in);
    if (!filename.is_open())
    {
        std::cerr << "Error: Failed to open file\n";
        return (-1);
    }
    std::ofstream repl_filename(repl_str);
    length = strlen(argv[1]);
    while(getline(filename, line))
        text += (line + "\n");
    if (text.size() >= length)
    {
        while (1)
        {
            n = text.find(argv[1], n);
            if (n == std::string::npos)
                break ;
            text.erase(n, length);
            text.insert(n, argv[2]);
            n += strlen(argv[2]);
        }
        repl_filename << text;
    }
    else
        repl_filename << text;
    filename.close();
    repl_filename.close();
    return (0);
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        argv++;
        if (!strlen(argv[0]) || !strlen(argv[1]) || !strlen(argv[2]))
        {
            std::cerr << "Error: Invalid arguments\n";
            return (1);
        }
        if (ft_replace(argv) == -1)
            return (1);
    }
    else
        std::cerr << "Error: Wrong number of arguments given. Please provide 3 arguments.\n";
}
