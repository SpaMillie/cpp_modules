/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:24:10 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/13 19:14:16 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Form;

class Intern{
    private:
        const std::string formOptions[3];
    public:
        Intern();
        Intern(const Intern& obj);
        Intern& operator=(const Intern& other);
        ~Intern();
        Form* makeForm(std::string form, std::string target);
};
