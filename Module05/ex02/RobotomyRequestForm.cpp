/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:07:36 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/14 18:01:23 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Husk", 72, 45){
    std::cout << "RobotomyRequestForm class: default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45){
    std::cout << "RobotomyRequestForm class: custom constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : AForm(obj.getName(), obj.getGradeSign(), obj.getGradeExec()){
    std::cout << "RobotomyRequestForm class: copy constructior called\n";
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm destroyed\n";
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) {
    if (this->getState() == "true"){
        if (executor.getGrade() <= this->getGradeExec()){
            std::cout << "\n*****whirrwhirrrrrrrr*****\n\n";
            std::srand(time(0));
            bool lottery = (std::rand() % 2);
            if (lottery != 0)
                std::cout << this->getName() << " has been successfully robotomised!\n";
            else
                std::cout << "Uh-oh, robotomy failed :(\n";
        }
        else
        {
            std::cout << executor.getName() << " is not authorised to execute this form\n";
            throw (GradeTooLowException());
        }
    }
    else
        std::cout << "Could not robotomise " << this->getName() << " because the form is missing a signature.\n";
}

void RobotomyRequestForm::beSigned(const Bureaucrat& obj) {
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
