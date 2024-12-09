/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:06:18 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/09 21:33:47 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137){
    std::cout << "Shrubbery created in form\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "Shrubbery uncreated\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) {
    if (this->getState() == "true"){
        if (executor.getGrade() <= this->getGradeExec()){
            std::string filename = executor.getName() + "_shrubbery";
            std::ofstream theFile(filename);
            theFile << "    *     \n  ***  \n ***** \n*******\n";
            theFile.close();
        }
        else{
            this->setMessage(1);
            throw (*this);
        }
    }
    else
        std::cout << "Could not execute " << this->getName() << " because it's not signed\n";
}    

