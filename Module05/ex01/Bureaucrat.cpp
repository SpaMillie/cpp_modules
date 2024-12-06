/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:33:41 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/06 15:05:14 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):name(name), grade(grade){
    if (grade < 1 || grade > 150)
        throw (*this);
    std::cout << "Bureaucrat created\n";
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
    grade -= 1;
    if (grade < 1)
        throw (*this);
    std::cout << "Grade incremented\n";
}

void    Bureaucrat::decrement(void){
    grade += 1;
    if (grade > 150)
        throw (*this);
    std::cout << "Grade decremented\n";
}

void        Bureaucrat::signForm(Form& obj) const{
    if (obj.getState() == true)
        std::cout << this->name << " signed " << obj.getName() << std::endl;
    else{
        std::cout << this->name << " couldn't sign " << obj.getName() << " because ";
        
            
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj){
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (os);
}
