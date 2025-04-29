/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:12:47 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/29 18:43:40 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <bits/stdc++.h>

Span::Span(): N(0){}

Span::Span(unsigned int _N): N(_N){}

Span::~Span(){}

Span::Span(const Span& object): N(object.N), container(object.container){}

Span& Span::operator=(const Span& other){
    if (this != &other){
        // you don't need this, the operator assignment handles this!
        // if (container.empty() != true)
        //     container.clear();
        container = other.container;
        N = other.N;
    }
    return (*this);
}

void Span::addNumber(int newNum){
    if (container.size() == N)
        throw Span::MaxSizeReached();
    //find the first element that is bigger or equal to the value
    auto it = lower_bound(container.begin(), container.end(), newNum);
    //insert before this element
    container.insert(it, newNum);
}

void Span::massAddNumber(int newNum){
    if (N == 0)
        return ;
    container.resize(N);
    std::iota(container.begin(), container.end(), newNum);
}

int randomizer(){
    return (std::rand());
}

void Span::massRandAddNumber(){
    if (N == 0)
        return ;
    container.resize(N);
    std::srand(time(0));
    for (size_t i = 0; i < N; i++)
        generate(container.begin(), container.end(), randomizer);
    sort(container.begin(), container.end());
}

unsigned int Span::shortestSpan(){
    if (container.size() < 2)
        throw Span::NotEnoughNums();
    int min = container.at(1) - container.at(0);
    for (unsigned int i = 1; i + 1 < container.size(); i++){
        min = std::min(min, container.at(i + 1) - container.at(i));
    }
    return (min);
}
/*
if you want values → use front() / back().
If you want iterators for looping → use begin() / end().
*/
unsigned int Span::longestSpan(){
    if (container.size() < 2)
        throw Span::NotEnoughNums();
    unsigned int i = container.back() - container.front();
    return (i);
}

void Span::printAll() const{
    for (unsigned int i = 0; i < container.size(); i++){
        std::cout << container.at(i) << std::endl;
    }
}

const char* Span::MaxSizeReached::what(void) const noexcept{
    return ("the container will no longer be accepting donations.");
}

const char* Span::NotEnoughNums::what(void) const noexcept{
    return ("you need to add more numbers first.");
}