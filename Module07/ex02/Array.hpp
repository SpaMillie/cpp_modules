/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:39:38 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/19 18:12:17 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
//must use new []


//T is the template argument which is a placeholder for the data type used
//class is a keyword
template <class T>
class Array{
    private:
        unsigned int    _length;
        T*              _array;
    public:
        Array(); //constructor with no parameter, creates an emppty array
        Array(unsigned int n); //creates an array of n elements initialised by default
        Array(const Array& obj);
        const Array& operator=(const Array& obj);
        const T& operator[](unsigned int i);
        const T& operator[](unsigned int i) const;
        ~Array();

        const T& at(unsigned int i);
        const T& at(unsigned int i) const;
        unsigned int size();
        unsigned int size() const;
};



// std::out_of_range