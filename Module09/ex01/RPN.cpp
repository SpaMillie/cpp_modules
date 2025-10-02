/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:50:30 by mspasic           #+#    #+#             */
/*   Updated: 2025/10/03 00:19:59 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::~RPN(){}

static int calculate(int left, int right, char c){
    if (c == '+')
        return left + right;
    else if (c == '-')
        return left - right;
    else if (c == '*')
        return left * right;
    else if (c == '/'){
        if (right == 0)
            throw std::runtime_error("division by 0");
        return left / right;
    }
    else
        throw std::runtime_error("unknown operator");
}

static bool    parsing(char oy, int& value){
    if (oy >= '0' && oy <= '9'){
        value = oy - '0';
        return true;
    }
    else
        return false;
}

void RPN::stack_em(const std::string& boys){
    int value;

    //first case -> it's a number
    for  (char oy : boys){
        if (oy == ' ')
            continue;
        else if (parsing(oy, value))
            the_stack.push(value);
        else{
        //second case -> it's an operator 
            if (the_stack.size() < 2)
                throw std::runtime_error("not enough numbers");
            int right = the_stack.top();
            the_stack.pop();
            int left = the_stack.top();
            the_stack.pop();
            int res = calculate(left, right, oy);
            the_stack.push(res);
        }
    }
    //in the end there should be only one number in the stack
    if (the_stack.size() != 1)
        throw std::runtime_error("something went wrong");
    std::cout << the_stack.top() << "\n";
}