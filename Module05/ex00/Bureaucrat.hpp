/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:33:11 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/06 11:20:45 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat : public std::exception{
    private:
        const std::string name;
        int grade;
        std::string error_message;
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(int grade);
        ~Bureaucrat();
        const char  *what(void) const throw();
        std::string getName(void) const;
        int         getGrade(void) const;
        void        increment(void);
        void        decrement(void);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
