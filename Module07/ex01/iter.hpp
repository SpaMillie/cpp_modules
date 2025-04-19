/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 20:29:53 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/19 10:23:33 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename F> void iter (T *array, size_t length, F& func){
    if (array == nullptr)
        throw std::invalid_argument("Invalid address.");
    for (size_t i = 0; i < length; i++){
        func(array[i]);
    }
}
