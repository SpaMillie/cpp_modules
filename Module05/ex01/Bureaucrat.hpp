/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:33:11 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/14 17:08:52 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat{

    private:
        const std::string   _name;
        int                 _grade;
         
        class GradeTooLowException : public std::exception{
            public:
                const char *what(void) const noexcept override; 
        };
        
        class GradeTooHighException : public std::exception{
            public:
                const char *what(void) const noexcept override; 
        };  

    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator=(const Bureaucrat& other) = delete;
        ~Bureaucrat();

        std::string getName(void) const;
        int         getGrade(void) const;
        void        checkGrade(int grade);
        
        void        increment(void);
        void        decrement(void);
        void        signForm(Form &obj, std::string str) const;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
