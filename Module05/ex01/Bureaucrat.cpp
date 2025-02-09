/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:33:41 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/14 17:13:29 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("Husk"), _grade(150){
    std::cout << "Bureaucrat class: default constructor called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade){
    checkGrade(_grade);
    std::cout << "Bureaucrat class: custom constructor called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj):
    _name(obj._name), 
    _grade(obj._grade){
    std::cout << "Bureaucrat class: copy constructor called\n";
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat destroyed\n";
}

std::string Bureaucrat::getName(void) const{
    return (_name);
}

int Bureaucrat::getGrade(void) const{
    return (_grade);
}

void Bureaucrat::checkGrade(int grade){
    if (grade < 1)
        throw (Bureaucrat::GradeTooHighException());
    if (grade > 150)
        throw (Bureaucrat::GradeTooLowException());
}

const char* Bureaucrat::GradeTooHighException::what(void) const noexcept{
    return ("grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what(void) const noexcept{
    return ("grade is too low");

}

void    Bureaucrat::increment(void){
    checkGrade(_grade);
    _grade -= 1;
    checkGrade(_grade);
    std::cout << "Grade incremented\n";
}

void    Bureaucrat::decrement(void){
    checkGrade(_grade);
    _grade += 1;
    checkGrade(_grade);
    std::cout << "Grade decremented\n";
}

void        Bureaucrat::signForm(Form& obj, std::string str) const{
    if (obj.getState() == "true" && str.size() == 0)
        std::cout << this->_name << " signed " << obj.getName() << std::endl;
    else{
        std::cout << this->_name << " couldn't sign " << obj.getName() << " because " << str;
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj){
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "\n";
    return (os);
}
