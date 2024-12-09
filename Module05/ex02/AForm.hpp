/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:01:30 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/09 14:24:08 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Bureaucrat;

class AForm : public std::exception{
    private:
        const std::string   name;
        bool                isSigned;
        const int   gradeSign;
        const int   gradeExecute;
        const char* GradeTooHighException = "grade is too high";
        const char* GradeTooLowException = "grade is too low";        
    public:
        AForm(std::string name, int grade1, int grade2);
        AForm(const AForm& obj);
        virtual ~AForm();
        const char *what(void) const throw();
        std::string getName(void) const;
        std::string getState(void) const;
        int     getGradeSign(void) const;
        int     getGradeExec(void) const;
        virtual void    beSigned(const Bureaucrat& obj);
};

std::ostream& operator<<(std::ostream& os, const AForm& obj); //should I delete this?

