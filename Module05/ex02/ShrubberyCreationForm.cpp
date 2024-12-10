/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:06:18 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/10 18:22:58 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137){
    std::cout << "ShrubberyCreationForm created\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm destroyed\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) {
    if (this->getState() == "true"){
        if (executor.getGrade() <= this->getGradeExec()){
            std::string filename = this->getName() + "_shrubbery";
            std::ofstream theFile(filename);
            theFile << "     *\n    ***\n   *****\n  *******\n ****|****\n";
            theFile.close();
            std::cout << "Created shrubbery for " << this->getName() << "\n";
        }
        else
        {
            std::cout << executor.getName() << " is not authorised to execute this form\n";
            throw (*this);
        }
    }
    else
        std::cout << "Could not create shrubbery for " << this->getName() << " because the form is missing a signature.\n";
}    

void ShrubberyCreationForm::beSigned(const Bureaucrat& obj) {
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
        throw (*this);
    }
}
