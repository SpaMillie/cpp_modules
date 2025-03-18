/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:17:50 by mspasic           #+#    #+#             */
/*   Updated: 2025/03/18 14:44:21 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

// You can't put everything as private and delete it! Here's why:
// compiler still expects a destructor
// best practice > constructor should be private but default, means
//                  > constructor still exists, so the compiler can generate it
//                  > it's private so it can't be called outside of the class
//                  > can still be used internally and by friend functions
//               > delete copy/move operations
//               > making constructor and destructor default means means the 'instantiated objects' are usable for the copy/move which get deleted; so there's no issues in that regard

class ScalarConverter{
    private:
        ScalarConverter() = default;
         
        ScalarConverter(const ScalarConverter& obj) = delete;
        ScalarConverter& operator=(const ScalarConverter& other) = delete;
        
        ~ScalarConverter() = default;
    public:
        static void convert(std::string literal);
};
