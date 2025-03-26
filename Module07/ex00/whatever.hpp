/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 20:10:49 by mspasic           #+#    #+#             */
/*   Updated: 2025/03/26 19:07:40 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T> void swap(T& x, T& y){
    T temp = x;
    x = y;
    y = temp;
}

template <typename T> T min(const T& x, const T& y){
    // shortest: return ((y < x) ? y : x);
    if (y <= x)
        return y;
    return x;
}

template <typename T> T max(const T& x, const T& y){
    // shortest: return ((y > x) ? y : x);
    if (y >= x)
        return y;
    return x;
}
