/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:01:30 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/13 19:17:10 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Bureaucrat;

class Form : public std::exception{
    private:
        const std::string   target;
        bool                isSigned;
        const int   gradeSign;
        const int   gradeExecute;
        const char* GradeTooHighException = "grade is too high";
        const char* GradeTooLowException = "grade is too low";
        const char* InvalidType = "form is of an invalid type";
        char* message;
    public:
        Form(std::string target, int grade1, int grade2);
        Form();
        virtual ~Form();
        std::string getName(void) const;
        std::string getState(void) const;
        int     getGradeSign(void) const;
        int     getGradeExec(void) const;
        void    setState(void);
        void    setMessage(int i);
        const char* what(void) const noexcept;
        virtual void beSigned(const Bureaucrat& obj);
        virtual void execute(Bureaucrat const& executor);
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

