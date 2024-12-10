/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:33:11 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/10 15:38:03 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AForm;

class Bureaucrat : public std::exception{
    private:
        const std::string name;
        int grade;
        const char* GradeTooHighException = "grade is too high";
        const char* GradeTooLowException = "grade is too low";
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& obj);
        ~Bureaucrat();
        const char  *what(void) const throw();
        std::string getName(void) const;
        int         getGrade(void) const;
        void        increment(void);
        void        decrement(void);
        void        signForm(AForm &obj, std::string str) const;
        void        executeForm(AForm const& form) const;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

