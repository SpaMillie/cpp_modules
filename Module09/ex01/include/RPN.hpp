/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:49:49 by mspasic           #+#    #+#             */
/*   Updated: 2025/10/02 22:40:27 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class RPN{
    private:
        RPN(const RPN& obj) = delete;
        RPN& operator=(const RPN& obj) = delete;

    public:
        RPN();
        ~RPN();

};