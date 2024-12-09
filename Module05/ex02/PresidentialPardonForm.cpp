/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:08:25 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/09 21:31:08 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5){
    std::cout << "PresidentialPardonForm created\n";
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm has been unpardoned\n";
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) {
    if (this->getState() == "true"){
        if (executor.getGrade() <= this->getGradeExec()){
            std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox\n";
        }
        else{
            this->setMessage(1);
            throw (*this);
        }
    }
    else
        std::cout << "Could not execute " << this->getName() << " because it's not signed\n";
}
