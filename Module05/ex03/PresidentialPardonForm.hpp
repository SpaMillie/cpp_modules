/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:08:00 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/13 14:00:59 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form{
    public:
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        void    execute(Bureaucrat const& executor) override;
        void    beSigned(const Bureaucrat& obj) override;
};
