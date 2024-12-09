/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:56:40 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/09 21:09:25 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm:protected AForm{
    public:
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm(); 
        void execute(Bureaucrat const& executor) override;
};
