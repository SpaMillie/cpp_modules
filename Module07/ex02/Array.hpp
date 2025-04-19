/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:39:38 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/19 20:46:50 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>

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
        T& operator[](unsigned int i);
        const T& operator[](unsigned int i) const;
        ~Array();

        T& at(unsigned int i);
        const T& at(unsigned int i) const;
        unsigned int size() const;

        void printAll() const;
};
# include "Array.tpp"

#endif