/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:39:22 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/13 15:39:11 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

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

Form* Intern::makeForm(std::string name, std::string target){
    Form *temp = nullptr;
    int i = 0;

    while (i < 3 && name != this->formOptions[i])
        i++;
    if (i < 3){
        std::cout << "Intern created a " << formOptions[i] << " form!\n";
    }
    switch (i){
        case 0:
            temp = new ShrubberyCreationForm(target);
            break;
        case 1:
            temp = new RobotomyRequestForm(target);
            break;
        case 2:
            temp = new PresidentialPardonForm(target);
            break;
        default:
            Form invalidtemp;
            break;
    }
    temp->setAlloc(true);
    return (temp);
}