/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:39:38 by mspasic           #+#    #+#             */
/*   Updated: 2025/03/27 15:00:33 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//must use new []


//T is the template argument which is a placeholder for the data type used
//class is a keyword
template <class T>
class Array{
    private:

    public:
        Array(); //constructor with no parameter, creates an emppty array
        Array(unsigned int n); //creates an array of n elements initialised by default
        Array(const Array& obj);
        const Array& operator=(const Array& obj);

        class std::exception
};



std::out_of_range