/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 20:29:53 by mspasic           #+#    #+#             */
/*   Updated: 2025/03/26 19:35:10 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename F> void iter (T *array, unsigned length, F func){
    if (array == nullptr)
        throw std::invalid_argument("Invalid");
    for (unsigned i = 0; i < length; i++){
        func(array[i]);
    }
}