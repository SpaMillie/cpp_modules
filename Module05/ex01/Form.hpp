/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:01:30 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/06 18:31:47 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form : public std::exception{
    private:
        const std::string   name;
        bool                isSigned;
        const int   gradeSign;
        const int   gradeExecute;
        const char* GradeTooHighException = "grade is too high";
        const char* GradeTooLowException = "grade is too low";        
    public:
        Form(std::string name, int grade1, int grade2);
        Form(const Form& obj);
        ~Form();
        const char *what(void) const throw();
        std::string getName(void) const;
        std::string getState(void) const;
        int     getGradeSign(void) const;
        int     getGradeExec(void) const;
        void    beSigned(const Bureaucrat& obj);
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif
