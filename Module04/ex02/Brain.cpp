/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:53:21 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/02 16:02:55 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain default constructor called\n";
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = "Eat. Play. Sleep.\n";
    }
}

Brain::Brain(std::string type){
    std::cout << "Spicy Brain constructor called\n";
    this->setIdeas(type);
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

void Brain::setIdeas(std::string type){
    if (type == "Cat")
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = "2 AM?I should SCREAM!!\n";
    }
    else if (type == "Dog")
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = "Let's go outside!\n";
    }
    else
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = "eh.\n";
    }
}

std::string Brain::getAnIdea(int index) const{
    if (index < 0)
        index = 0;
    else if (index > 99)
        index = 99;
    return (ideas[index]);
}
