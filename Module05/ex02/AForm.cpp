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

AForm::AForm(std::string name, int grade1, int grade2):name(name),isSigned(false),gradeSign(grade1), gradeExecute(grade2){
    if (grade1 < 1 || grade2 < 1 || grade1 > 150 || grade2 > 150)
        throw (*this);
    std::cout << "AForm created!\n";
}

AForm::AForm(const AForm& obj):name(obj.name),isSigned(obj.isSigned),gradeSign(obj.gradeSign), gradeExecute(obj.gradeExecute){
    std::cout << "AForm: copy constructor called\n";
}

AForm::~AForm(){
    std::cout << "AForm destruction\n";
}

std::string AForm::getName(void) const{
    return (name);
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

const char* AForm::what(void) const throw(){
    if (gradeSign < 1 || gradeExecute < 1)
        return (GradeTooHighException);
    // else if (gradeSign > 150 || gradeExecute > 150)
    //     return (GradeTooLowException);
    else
        return (GradeTooLowException);
}

void AForm::beSigned(const Bureaucrat& obj){ //think if there is some other reason why sigining would fail and adjust this
    if (obj.getGrade() <= gradeSign)
    {
        if (isSigned == true)
            obj.signAForm(*this, "it has already been signed\n");
        else{
            isSigned = true;
            obj.signAForm(*this, "");
        }
    }
    else
        throw (*this);
}

std::ostream& operator<<(std::ostream& os, const AForm& obj){
    os << "AForm: " << obj.getName() << "\n    Grade required for signature: " << obj.getGradeSign() << "\n    Grade required for execution: " << obj.getGradeExec() << std::endl;
    return (os);
}

