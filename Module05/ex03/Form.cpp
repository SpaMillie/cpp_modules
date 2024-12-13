/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:01:13 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/13 18:57:35 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form():target(""), isSigned(false), gradeSign(160), gradeExecute(160){
    this->setMessage(2);
    throw(*this);
}

Form::Form(std::string target, int grade1, int grade2):target(target),isSigned(false),gradeSign(grade1), gradeExecute(grade2){
    if (grade1 < 1 || grade2 < 1){
        this->setMessage(0);
        throw (*this);
    }  
    else if (grade1 > 150 || grade2 > 150){
        this->setMessage(1);
        throw (*this);
    }
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

void    Form::setMessage(int i){
    if (i == 0)
        message = (char *)GradeTooLowException;
    else if (i == 1)
        message = (char *)GradeTooHighException;
    else
        message = (char *)InvalidType;
}

const char* Form::what(void) const throw(){
    return(message);
}

void Form::beSigned(const Bureaucrat& obj){
    if(this->getState() == "true")
        obj.signForm(*this, "it has already been signed\n");
    else{
        this->setState();
        obj.signForm(*this, "");
    }
}

void Form::execute(Bureaucrat const& executor){
    if(this->getState() == "true")
        std::cout << executor.getName() << " executed the form for " << this->getName() << ", but the form does nothing\n";
    else
        std::cout << executor.getName() << " refuses to execute a useless form that is not even signed\n";
}

// void    Form::setType(std::string name){
//     type = name;
// }

// int Form::getType(void) const{
//     std::string formOptions[] = {"shrubbery creation", "robotomy request", "presidential pardon", "no"};
//     for (int i = 0; i < formOptions->size(); i++)
//     {
//         if (type == formOptions[i])
//             return (i);
//     }
// }

std::ostream& operator<<(std::ostream& os, const Form& obj){
    os << obj.getName() << "\n    Grade required for signature: " << obj.getGradeSign() << "\n    Grade required for execution: " << obj.getGradeExec() << std::endl;
    return (os);
}

