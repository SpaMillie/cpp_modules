/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:01:13 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/06 18:47:20 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int grade1, int grade2):name(name),isSigned(false),gradeSign(grade1), gradeExecute(grade2){
    if (grade1 < 1 || grade2 < 1 || grade1 > 150 || grade2 > 150)
        throw (*this);
    std::cout << "Form created!\n";
}

Form::Form(const Form& obj):name(obj.name),isSigned(obj.isSigned),gradeSign(obj.gradeSign), gradeExecute(obj.gradeExecute){
    std::cout << "Form: copy constructor called\n";
}

Form::~Form(){
    std::cout << "Form destruction\n";
}

std::string Form::getName(void) const{
    return (name);
}

std::string Form::getState(void) const{
    if (isSigned == 1)
        return ("true");
    else
        return ("false");
}

int Form::getGradeSign(void) const{
    return (gradeSign);
}

int Form::getGradeExec(void) const{
    return(gradeExecute);
}

const char* Form::what(void) const throw(){
    if (gradeSign < 1 || gradeExecute < 1)
        return (GradeTooHighException);
    // else if (gradeSign > 150 || gradeExecute > 150)
    //     return (GradeTooLowException);
    else
        return (GradeTooLowException);
}

void Form::beSigned(const Bureaucrat& obj){ //think if there is some other reason why sigining would fail and adjust this
    if (obj.getGrade() <= gradeSign)
    {
        if (isSigned == true)
            obj.signForm(*this, "it has already been signed\n");
        else{
            isSigned = true;
            obj.signForm(*this, "");
        }
    }
    else
        throw (*this);
}

std::ostream& operator<<(std::ostream& os, const Form& obj){
    os << "Form: " << obj.getName() << "\n    Grade required for signature: " << obj.getGradeSign() << "\n    Grade required for execution: " << obj.getGradeExec() << std::endl;
    return (os);
}

