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
        const std::string   target;
        bool                isSigned;
        const int   gradeSign;
        const int   gradeExecute;
        const char* GradeTooHighException = "grade is too high";
        const char* GradeTooLowException = "grade is too low";
        char *message;      
    public:
        AForm(std::string target, int grade1, int grade2);
        virtual ~AForm();
        const char *what(void) const throw();
        std::string getName(void) const;
        std::string getState(void) const;
        int     getGradeSign(void) const;
        int     getGradeExec(void) const;
        void    setState(void);
        bool    beSigned(const Bureaucrat& obj);
        void    setMessage(int i);
        const char* getMessage(void) const;
        virtual void execute(Bureaucrat const& executor) = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& obj); //should I delete this?

