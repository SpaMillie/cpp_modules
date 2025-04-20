/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 20:10:49 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/20 12:55:18 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T> void swap(T& x, T& y){
    T temp;
    temp = x;
    x = y;
    y = temp;
}

template <typename T> const T& min(const T& x, const T& y){
    // shortest: return ((y < x) ? y : x);
    if (y < x)
        return y;
    return x;
}

template <typename T> const T& max(const T& x, const T& y){
    // shortest: return ((y > x) ? y : x);
    if (y > x)
        return y;
    return x;
}
