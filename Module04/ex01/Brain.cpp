/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:53:21 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/02 12:02:31 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain default constructor called\n";
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = "generic animal idea";
    }
}

Brain::Brain(const Brain& obj){
    std::cout << "Brain copy constructor called\n";
    *this = obj;
}

Brain& Brain::operator=(const Brain& other){
    std::cout << "Brain copy assignment operator called\n";
    if (this == &other)
        return (*this);
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called\n";
}