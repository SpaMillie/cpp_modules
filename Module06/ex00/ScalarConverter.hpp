/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:17:50 by mspasic           #+#    #+#             */
/*   Updated: 2025/01/06 17:22:01 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ScalarConverter{
    public:
        ScalarConverter() = delete;
        ScalarConverter(const ScalarConverter& obj) = delete;
        ScalarConverter& operator=(const ScalarConverter& other) = delete;
        ~ScalarConverter() = delete;
        static void convert(std::string literal);
};
