/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:41:54 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/29 18:03:19 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template <class T, class Container = std::deque<T>>
class MutantStack : public std::stack<T, Container>{
    public:
        //take every constructor from std::stack<T, Container>
        //using Base::Base
        using std::stack<T, Container>::stack;

        ~MutantStack() = default;
        MutantStack(const MutantStack& obj) = default;
        MutantStack& operator=(const MutantStack& obj) = default;

        using iterator = typename Container::iterator;
        using const_iterator = typename Container::const_iterator;
        using reverse_iterator = typename Container::reverse_iterator;
        using const_reverse_iterator = typename Container::const_reverse_iterator;

        iterator begin() {return this->c.begin();}
        iterator end() {return this->c.end();}

        const_iterator cbegin() {return this->c.cbegin();}
        const_iterator cend() {return this->c.cend();}

        reverse_iterator rbegin() {return this->c.rbegin();}
        reverse_iterator rend() {return this->c.rend();}

        const_reverse_iterator crbegin() {return this->c.crbegin();}
        const_reverse_iterator crend() {return this->c.crend();}

        //at()
        auto& at(std::size_t i) {return this->c.at(i);}
        const auto& at(std::size_t i) const {return this->c.at(i);}

        //operator[]
        auto& operator[](std::size_t i) {return this->c[i];}
        const auto& operator[](std::size_t i) const {return this->c[i];}

        //using front()
        auto& front() {return this->c.front();}
        const auto& front() const {return this->c.front();}

        //using back()
        auto& back() {return this->c.back();}
        const auto& back() const {return this->c.back();}

};