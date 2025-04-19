/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 21:27:22 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/19 22:23:43 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
void easyfind(T& container, int element){
    if (container.empty())
        throw std::out_of_range("This bitch empty. Yeet!");
    auto it = std::find(container.begin(), container.end(), element);
    if (it == container.end()) 
        throw std::out_of_range("No such element found!");
    else
        std::cout << "Element found at index position " << std::distance(container.begin(), it) << "\n";
}

#endif