/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 23:01:45 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/13 23:05:12 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cstring>
#include <new>

size_t count_inst(char *line, char *compare)
{
    size_t counter = 0;

    for (size_t i = 0; i < strlen(line); i++)
    {
        if (line[i] == compare[0] && !strncmp(line + i, compare, strlen(compare)))
            counter++;
    }
    return (counter);
}

char    *ft_replace(char *source, char *replace, char *replace_with, size_t len)
{
    char *new_str;
    size_t z = 0;
    size_t i = 0;

    new_str = new(std::nothrow) char[len];
    if (!new_str)
    {
        std::cerr << "Memory allocation failed.\n";
        return (NULL);
    }
    while(i < strlen(source))
    {
        if (source[i] == replace[0] && !strncmp(source + i, replace, strlen(replace)))
        {
            for (size_t y = 0; y < strlen(replace_with); y++)
                new_str[z++] = replace_with[y];
            i += strlen(replace);
        }
        else
            new_str[z++] = source[i++];
    }
    new_str[z] = '\0';
    return (new_str);
}

int start_this(char **argv)
{
    std::fstream filename;
    std::string repl_str(argv[0]);
    repl_str.append(".replace");
    std::string text;
    char *c_text;
    char *copy_c_text;
    size_t length;
    size_t counter;

    filename.open(argv[0], std::ios::in);
    if (!filename.is_open())
    {
        std::cerr << "Error: Failed to open file\n";
        return (-1);
    }
    std::ofstream repl_filename(repl_str);
    while (getline(filename, text))
    {
        c_text = (char *)text.c_str();
        counter = count_inst(c_text, argv[1]);
        if (counter != 0)
        {
            length = strlen(c_text) - (counter * strlen(argv[1])) + (counter * strlen(argv[2])) + 1;
            copy_c_text = ft_replace(c_text, argv[1], argv[2], length);
            if (!copy_c_text)
                return (-1);
            repl_filename << copy_c_text << std::endl;
            delete[] copy_c_text;
        }
        else
            repl_filename << c_text << std::endl;
    }
    filename.close();
    repl_filename.close();
    return (0);
}

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
        argv++;
        if (!strlen(argv[0]) || !strlen(argv[1]) || !strlen(argv[2]))
        {
            std::cerr << "Error: Invalid arguments\n";
            return (1);
        }
        if (start_this(argv) == -1)
            return (1);
    }
    else
        std::cerr << "Error: Wrong number of arguments given. Please provide 3 arguments.\n";
}