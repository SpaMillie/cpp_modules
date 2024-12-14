/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:01:30 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/14 15:57:56 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form{
    private:
        const std::string   _name;
        bool                _isSigned;
        const int   _gradeSign;
        const int   _gradeExecute;
         
        class GradeTooLowException : public std::exception{
            public:
                const char *what(void) const noexcept override; 
        };
        
        class GradeTooHighException : public std::exception{
            public:
                const char *what(void) const noexcept override; 
        };

    public:

        Form();
        Form(std::string name, int gradeS, int gradeE);
        Form(const Form& obj);
        Form& operator=(const Form& other) = delete;
        ~Form();

        std::string getName(void) const;
        std::string getState(void) const;
        int     getGradeSign(void) const;
        int     getGradeExec(void) const;
        
        void    checkGrades(int gradeS, int gradeE);
        void    beSigned(const Bureaucrat& obj);
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif
