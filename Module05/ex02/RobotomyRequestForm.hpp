/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:06:57 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/10 16:33:26 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm {
    public:
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        void    execute(Bureaucrat const& executor) override;
        void    beSigned(const Bureaucrat& obj) override;
};
