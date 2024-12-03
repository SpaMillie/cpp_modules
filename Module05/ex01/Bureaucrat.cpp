/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:33:41 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/03 19:56:54 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):name(name){
    if (grade < 1 || grade > 150)
        throw (Bureaucrat(grade));
    this->grade = grade;
    std::cout << "Bureaucrat created\n";
}

Bureaucrat::Bureaucrat(int grade){
    if (grade < 1)
        this->error_message = "Grade too high";
    else
        this->error_message = "Grade too low";
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat destroyed\n"; //gets destroyed with the exceptions too?
}

std::string Bureaucrat::getName(void) const{
    return (name);
}

unsigned int Bureaucrat::getGrade(void) const{
    return (grade);
}

const char* Bureaucrat::what(void) const throw(){
    return (error_message.c_str());
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj){
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (os);
}
