/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:01:13 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/06 14:11:01 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
class Form : public std::exception{
    private:
        const std::string name;
        bool isSigned;
        const int gradeSign;
        const int gradeExecute;

        void    beSigned(void);
        void    signForm(void);
        const char *what(void) const throw();

Form::Form(std::string name, int grade1, int grade2):name(name),isSigned(false),gradeSign(grade1), gradeExecute(grade2){
    if (grade1 < 1 || grade2 < 1)
        throw(Form(0));
    if (grade1 > 150 || grade2 > 150)
        throw(Form(151));
    std::cout << "Form created!\n";
}

Form::Form(int state){
    if (state == 0)
        this->errorMessage = "Grade too high\n";
    else
        this->errorMessage = "Grade too low\n";
}

Form::Form(const Form& obj):name(obj.name), isSigned(obj.isSigned), gradeSign(obj.gradeSign), gradeExecute(obj.gradeExecute){
    std::cout << "Form class: copy constructor called\n";
}

Form& Form::operator=(const Form& other){
    if (this == &other)
        return (*this);
    std::cout << "Form class: copy assignment  operator called\n";
    Form temp(other);
    return (temp);
}

Form::~Form(){
    std::cout << "Form destruction\n";
}

std::string Form::getName(void) const{
    return (name);
}

bool Form::getState(void) const{
    return (isSigned);
}

int Form::getGradeSign(void) const{
    return (gradeSign);
}

int Form::getGradeExec(void) const{
    return(gradeExecute);
}

void Form::beSigned(Bureaucrat& obj){
    if (obj.getGrade() < )
}
