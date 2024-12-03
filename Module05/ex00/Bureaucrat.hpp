/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:33:11 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/03 19:56:36 by mspasic          ###   ########.fr       */
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
        std::string getName(void) const;
        unsigned int getGrade(void) const;
        const char *what(void) const throw();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
