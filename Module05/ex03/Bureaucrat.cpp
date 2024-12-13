/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:33:41 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/13 19:11:38 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):name(name), grade(grade){
    if (grade < 1 || grade > 150)
        throw (*this);
    std::cout << "Bureaucrat created\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj):name(obj.name), grade(obj.grade), GradeTooHighException(obj.GradeTooHighException), GradeTooLowException(obj.GradeTooLowException){
    std::cout << "Bureaucrat class: copy constructor called\n";
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat destroyed\n";
}

std::string Bureaucrat::getName(void) const{
    return (name);
}

int Bureaucrat::getGrade(void) const{
    return (grade);
}

const char* Bureaucrat::what(void) const throw(){
    if (grade < 1)
        return (GradeTooHighException);
    else
        return (GradeTooLowException);
}

void    Bureaucrat::increment(void){
    if (grade < 1 || grade > 150)
        throw (*this);
    grade -= 1;
    if (grade < 1)
        throw (*this);
    std::cout << "Grade incremented\n";
}

void    Bureaucrat::decrement(void){
    if (grade < 1 || grade > 150)
        throw (*this);    
    grade += 1;
    if (grade > 150)
        throw (*this);
    std::cout << "Grade decremented\n";
}

void        Bureaucrat::signForm(Form& obj, std::string str) const{
    if (obj.getState() == "true" && str.size() == 0)
        std::cout << this->name << " signed " << obj.getName() << "'s form\n";
    else{
        std::cout << this->name << " couldn't sign " << obj.getName() << "'s form because " << str;
    }
}

void    Bureaucrat::executeForm(Form const& form) const{
    if (form.getState() == "true" && grade < form.getGradeExec()){
        std::cout << name << " executed " << form.getName() << "\n";
    }
    else
        std::cout << name << " cannot execute " << form.getName() << "\n";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj){
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return (os);
}
