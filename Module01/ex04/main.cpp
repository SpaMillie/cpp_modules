/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 23:01:45 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/13 16:28:27 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Streaming.hpp"

void write_error(std::string str)
{
    std::cout << str;
}

int start_this(Streaming *cur)
{
    std::fstream filename;
    std::fstream repl_filename;
    std::string repl_str = ".replace";

    filename.open(cur->get_element(1), std::ios::in);
    if (!filename.is_open())
    {
        write_error("Error: Cannot access file.\n");
        return (-1);
    }
    repl_filename.open(cur->get_element(1) + repl_str, std::ios::out);
    // cur->set_element(*argv, 1);

    std::cout << " got here\n";
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
    // int check = 0;
    Streaming cur;

    if (argc == 4)
    {
        cur.set_element(argv[1], 1);
        cur.set_element(argv[2], 2);
        cur.set_element(argv[3], 3);
        if (start_this(&cur) == -1)
            return (1);
    }
    else
        std::cout << "Error: Wrong number of arguments given. Please provide 3 arguments.\n";
}