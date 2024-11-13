/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Streaming.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:15:40 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/13 15:35:27 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Streaming.hpp"

Streaming::Streaming()
{
    std::cout << "Streaming object created\n";
}

Streaming::~Streaming()
{
    std::cout << "Streaming object destroyed\n";
}

void    Streaming::set_element(char *str, int i)
{
    switch (i)
    {
    case 1:
        filename.assign(str, sizeof(str));
        break;
    case 2:
        to_find.assign(str, sizeof(str));
        break;
    case 3:
        replacement.assign(str, sizeof(str));
        break;
    }
}

std::string Streaming::get_element(int i)
{
    switch(i)
    {
        case 1:
            return filename;
        case 2:
            return to_find;
        case 3:
            return replacement;
        default:
            return("Impossible");
    }
}
