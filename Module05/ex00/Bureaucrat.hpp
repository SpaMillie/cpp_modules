/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:33:11 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/06 18:19:23 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

/*a theory on why exception classes don't have to be designed in orthodox canonical form:
- copy constructor: the object being thrown is typically copied or moved to ensure 
it exists independently of the scope from which it was thrown; this might be inherently handled by
std::exception-derived classes
- copy assignment operator: it might be better practice to keep the exception class's members as const as possible;
this makes the assignment operator redundant, considering most values cannot be reassigned after they
have been initialised*/

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
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
