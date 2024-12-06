/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:01:30 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/06 14:10:51 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form : public std::exception{
    private:
        const std::string name;
        bool isSigned;
        const int gradeSign;
        const int gradeExecute;
        char *errorMessage;
    public:
        Form(std::string name, int grade1, int grade2);
        Form(int state);
        Form(const Form& obj);
        Form& operator=(const Form& other);
        ~Form();
        std::string getName(void) const;
        bool    getState(void) const;
        int     getGradeSign(void) const;
        int     getGradeExec(void) const;
        void    beSigned(Bureaucrat& obj);
        void    signForm(void);
        const char *what(void) const throw();
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif
