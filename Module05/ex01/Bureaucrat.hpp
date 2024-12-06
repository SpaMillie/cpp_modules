/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:33:11 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/06 14:11:22 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat : public std::exception{
    private:
        const std::string name;
        int grade;
        const char* GradeTooHighException = "grade is too high";
        const char* GradeTooLowException = "grade is too low";
    public:
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        const char  *what(void) const throw();
        std::string getName(void) const;
        int         getGrade(void) const;
        void        increment(void);
        void        decrement(void);
        void        signForm(Form &obj, bool result, int state) const;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
