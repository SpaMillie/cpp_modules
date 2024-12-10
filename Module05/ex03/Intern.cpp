/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:39:22 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/10 20:17:29 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"

Intern::Intern():formOptions{"shrubbery creation", "robotomy request", "presidential pardon"}{
    std::cout << "An intern was born!\n";
}

Intern::Intern(const Intern& obj){
    std::cout << "Copy constructor called\n";
    *this = obj;
}

Intern& Intern::operator=(const Intern& other){
    std::cout << "Copy assignment operator called\n";
    if (this == &other)
        return (*this);
    *this = other;
    return (*this);
}

Intern::~Intern(){
    std::cout << "An intern died :(\n";
}

Form& Intern::makeForm(std::string name, std::string target){
    int i = 0;
    Form *temp;
    
    while (i < 3 && name != this->formOptions[i])
        i++;
    if (i == 3)
    {
        temp->setMessage("form doesn't exist");
        throw (temp);
    }

}