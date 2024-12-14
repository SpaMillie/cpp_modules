/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:01:30 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/14 17:36:39 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Bureaucrat;

class AForm{
    private:
        const std::string   _target;
        bool                _isSigned;
        const int           _gradeSign;
        const int           _gradeExecute;
    
    public:

        AForm() = delete;
        AForm(std::string target, int gradeS, int gradeE);
        AForm(const AForm& obj) = delete;
        AForm& operator=(const AForm& other) = delete;
        virtual ~AForm();

        std::string getName(void) const;
        std::string getState(void) const;
        int     getGradeSign(void) const;
        int     getGradeExec(void) const;
        void    setState(void);
        
        void    checkGrades(int gradeS, int gradeE);
        virtual void    beSigned(const Bureaucrat& obj) = 0;
        virtual void    execute(Bureaucrat const& executor) = 0;
         
        class GradeTooLowException : public std::exception{
            public:
                const char *what(void) const noexcept override; 
        };
        
        class GradeTooHighException : public std::exception{
            public:
                const char *what(void) const noexcept override; 
        };
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);
