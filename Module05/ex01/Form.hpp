/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:01:30 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/03 20:06:05 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form : public std::exception{
    private:
        const std::string name;
        bool isSigned;
        const int gradeSign;
        const int gradeExecute;
    public:
        Form(std::string name, int grade1, int grade2);
        Form()
};

#endif
