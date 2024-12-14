/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:01:13 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/14 17:03:27 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form():_name("Husk"),_isSigned(false), _gradeSign(1), _gradeExecute(1){
    std::cout << "Form class: default constructor called\n";
}

Form::Form(std::string name, int gradeS, int gradeE):
    _name(name),
    _isSigned(false),
    _gradeSign(gradeS), 
    _gradeExecute(gradeE){
    checkGrades(_gradeSign, _gradeExecute);
    std::cout << "Form class: custom constructor called\n";
}

Form::Form(const Form& obj):
    _name(obj._name),
    _isSigned(obj._isSigned),
    _gradeSign(obj._gradeSign), 
    _gradeExecute(obj._gradeExecute){
    std::cout << "Form class: copy constructor called\n";
}

Form::~Form(){
    std::cout << "Form class: destructor called\n";
}

std::string Form::getName(void) const{
    return (_name);
}

std::string Form::getState(void) const{
    if (_isSigned == 1)
        return ("true");
    else
        return ("false");
}

int Form::getGradeSign(void) const{
    return (_gradeSign);
}

int Form::getGradeExec(void) const{
    return(_gradeExecute);
}

void    Form::checkGrades(int gradeS, int gradeE){
    if (gradeS < 1 || gradeE < 1)
        throw (GradeTooHighException());
    if (gradeS > 150 || gradeE > 150)
        throw(GradeTooLowException());
}

const char* Form::GradeTooHighException::what(void) const noexcept{
    return ("grade is too high");
}

const char* Form::GradeTooLowException::what(void) const noexcept{
    return ("grade is too low");
}

void Form::beSigned(const Bureaucrat& obj){
    if (obj.getGrade() <= _gradeSign)
    {
        if (_isSigned == true)
            obj.signForm(*this, "it has already been signed\n");
        else{
            _isSigned = true;
            obj.signForm(*this, "");
        }
    }
    else
        throw (GradeTooLowException());
}

std::ostream& operator<<(std::ostream& os, const Form& obj){
    os << "Form: " << obj.getName() << "\n    Grade required for signature: " << obj.getGradeSign() << "\n    Grade required for execution: " << obj.getGradeExec() << "\n    Form is signed: " << obj.getState() << "\n";
    return (os);
}

