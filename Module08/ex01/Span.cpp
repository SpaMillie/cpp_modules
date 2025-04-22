/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:12:47 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/22 12:38:04 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span(): N(0){}

Span::Span(unsigned int _N): N(_N){}

Span::~Span(){}

Span::Span(const Span& object): N(object.N){
    copy(object.container.begin(), object.container.end(), container.begin()); //copy!!
}

Span& Span::operator=(const Span& other){
    if (this != &other){
        if (container.empty() != true)
            container.clear();
        N = other.N;
        copy(other.container.begin(), other.container.end(), container.begin());
    }
    return (*this);
}

void Span::addNumber(int newNum){
    if (container.size() == N)
        throw Span::MaxSizeReached();
    container.push_back(newNum);
    sort(container.begin(), container.end());
}

void Span::massAddNumber(int startingNum){
    if (N == 0)
        return ;
    try {
        int i = 1;
        fill(container.begin(), container.end(), i);
        for (auto& x : container){
            x += i;
            i++;
        }
    }
    catch(const std::exception& e){
        std::cout << "The container has been filled to the brim!\n";
    }
}

void massAddStaggNumber(int startingNum);
int shortestSpan();
int longestSpan();

const char* Span::MaxSizeReached::what(void) const noexcept{
    return ("the container no longer accepts donations");
}

const char* Span::NumberNotFound::what(void) const noexcept{
    return ("sometimes you ask, but you don't receive");
}