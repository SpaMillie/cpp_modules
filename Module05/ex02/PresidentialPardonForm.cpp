/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:08:25 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/14 18:00:10 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Husk", 25, 5){
    std::cout << "PresidentialPardonForm class: default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5){
    std::cout << "PresidentialPardonForm class: custom constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm(obj.getName(), obj.getGradeSign(), obj.getGradeExec()){
    std::cout << "PresidentialPardonForm class: copy constructior called\n";
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm destroyed\n";
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) {
    if (this->getState() == "true"){
        if (executor.getGrade() <= this->getGradeExec()){
            std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox\n";
        }
        else
        {
            std::cout << executor.getName() << " is not authorised to execute this form\n";
            throw (GradeTooLowException());
        }
    }
    else
        std::cout << "Could not pardon " << this->getName() << " because the form is missing a signature.\n";
}

void PresidentialPardonForm::beSigned(const Bureaucrat& obj) {
    if (obj.getGrade() <= this->getGradeSign())
    {
        if (this->getState() == "true")
                obj.signForm(*this, "it has already been signed\n");
        else{
            this->setState();
            obj.signForm(*this, "");
        }
    }
    else
    {
        obj.signForm(*this, "they are not authorised to sign this form\n");
        throw (GradeTooLowException());
    }
}

