/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:49:49 by mspasic           #+#    #+#             */
/*   Updated: 2025/10/03 00:08:41 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>

class RPN{
    private:
        std::stack<int> the_stack;
        
        RPN(const RPN& obj) = delete;
        RPN& operator=(const RPN& obj) = delete;

    public:
        RPN();
        ~RPN();

        void stack_em(const std::string& boys);
};