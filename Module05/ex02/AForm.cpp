/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:01:13 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/06 18:47:20 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string target, int grade1, int grade2):target(target),isSigned(false),gradeSign(grade1), gradeExecute(grade2){
    std::cout << "AForm created!\n";
}

AForm::~AForm(){
    std::cout << "AForm destruction\n";
}

std::string AForm::getName(void) const{
    return (target);
}

std::string AForm::getState(void) const{
    if (isSigned == 1)
        return ("true");
    else
        return ("false");
}

int AForm::getGradeSign(void) const{
    return (gradeSign);
}

int AForm::getGradeExec(void) const{
    return(gradeExecute);
}

void    AForm::setState(void){
    isSigned = true;
}

const char* AForm::what(void) const throw(){
    return(GradeTooLowException);
}

std::ostream& operator<<(std::ostream& os, const AForm& obj){
    os << obj.getName() << "\n    Grade required for signature: " << obj.getGradeSign() << "\n    Grade required for execution: " << obj.getGradeExec() << std::endl;
    return (os);
}

