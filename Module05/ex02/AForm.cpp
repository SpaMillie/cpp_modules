/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:01:13 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/14 17:32:14 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

// AForm::AForm():_target("Husk"),_isSigned(false), _gradeSign(1), _gradeExecute(1){
//     std::cout << "AForm class: default constructor called\n";
// }

AForm::AForm(std::string name, int gradeS, int gradeE):
    _target(name),
    _isSigned(false),
    _gradeSign(gradeS), 
    _gradeExecute(gradeE){
    checkGrades(_gradeSign, _gradeExecute);
    std::cout << "AForm class: custom constructor called\n";
}

// AForm::AForm(const AForm& obj):
//     _target(obj._target),
//     _isSigned(obj._isSigned),
//     _gradeSign(obj._gradeSign), 
//     _gradeExecute(obj._gradeExecute){
//     std::cout << "AForm class: copy constructor called\n";
// }

AForm::~AForm(){
    std::cout << "AForm class: destructor called\n";
}

std::string AForm::getName(void) const{
    return (_target);
}

std::string AForm::getState(void) const{
    if (_isSigned == 1)
        return ("true");
    else
        return ("false");
}

int AForm::getGradeSign(void) const{
    return (_gradeSign);
}

int AForm::getGradeExec(void) const{
    return(_gradeExecute);
}

void    AForm::setState(void){
    _isSigned = true;
}

void    AForm::checkGrades(int gradeS, int gradeE){
    if (gradeS < 1 || gradeE < 1)
        throw (GradeTooHighException());
    if (gradeS > 150 || gradeE > 150)
        throw(GradeTooLowException());
}

const char* AForm::GradeTooHighException::what(void) const noexcept{
    return ("grade is too high");
}

const char* AForm::GradeTooLowException::what(void) const noexcept{
    return ("grade is too low");
}

// void AForm::beSigned(const Bureaucrat& obj){
//     if (obj.getGrade() <= _gradeSign)
//     {
//         if (_isSigned == true)
//             obj.signForm(*this, "it has already been signed\n");
//         else{
//             _isSigned = true;
//             obj.signForm(*this, "");
//         }
//     }
//     else
//         throw (GradeTooLowException());
// }

std::ostream& operator<<(std::ostream& os, const AForm& obj){
    os << obj.getName() << "\n    Grade required for signature: " << obj.getGradeSign() << "\n    Grade required for execution: " << obj.getGradeExec() << "\n    AForm is signed: " << obj.getState() << "\n";
    return (os);
}

