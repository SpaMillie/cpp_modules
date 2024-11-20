/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 23:01:45 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/20 19:54:32 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int ft_replace(std::string name, std::string str1, std::string str2)
{
    std::fstream filename;
    std::string repl_str(name);
    repl_str.append(".replace");
    std::string text;
    std::string line;
    size_t n = 0;;
    size_t length;

    filename.open(name, std::ios::in);
    if (!filename.is_open())
    {
        std::cout << "Error: Failed to open file\n";
        return (-1);
    }
    std::ofstream repl_filename(repl_str);
    length = str1.size();
    while(getline(filename, line))
        text += (line + "\n");
    if (text.size() >= length)
    {
        while (1)
        {
            n = text.find(str1, n);
            if (n == std::string::npos)
                break ;
            text.erase(n, length);
            if (str2.size())
                text.insert(n, str2);
            n += str2.size();
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
        std::string filename(argv[0]);
        std::string str1(argv[1]);
        std::string str2(argv[2]);
        if (filename.size() == 0 || str1.size() == 0)
        {
            std::cout << "Error: Invalid arguments\n";
            return (1);
        }
        if (ft_replace(filename, str1, str2) == -1)
            return (1);
    }
    else
        std::cout << "Error: Wrong number of arguments given. Please provide 3 arguments.\n";
}
