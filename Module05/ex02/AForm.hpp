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
        const char* GradeTooLowException = "grade is too low";
    public:
        AForm(std::string target, int grade1, int grade2);
        virtual ~AForm();
        std::string getName(void) const;
        std::string getState(void) const;
        int     getGradeSign(void) const;
        int     getGradeExec(void) const;
        void    setState(void);
        const char* what(void) const noexcept;
        virtual void beSigned(const Bureaucrat& obj) = 0;
        virtual void execute(Bureaucrat const& executor) = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);

