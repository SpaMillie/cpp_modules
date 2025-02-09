/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:56:40 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/14 18:04:10 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& obj);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other) = delete;
        ~ShrubberyCreationForm(); 
        void    execute(Bureaucrat const& executor) override;
        void    beSigned(const Bureaucrat& obj) override;
};
