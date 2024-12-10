/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:01:13 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/10 20:16:50 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string target, int grade1, int grade2):target(target),isSigned(false),gradeSign(grade1), gradeExecute(grade2){
    std::cout << "Form created!\n";
}

Form::~Form(){
    std::cout << "Form destruction\n";
}

std::string Form::getName(void) const{
    return (target);
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

void    Form::setState(void){
    isSigned = true;
}

void    Form::setMessage(char *str){
    message = str;
}

const char* Form::what(void) const throw(){
    //set message before and add the exception
    return(message);
}

std::ostream& operator<<(std::ostream& os, const Form& obj){
    os << obj.getName() << "\n    Grade required for signature: " << obj.getGradeSign() << "\n    Grade required for execution: " << obj.getGradeExec() << std::endl;
    return (os);
}

