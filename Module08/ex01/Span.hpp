/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:13:03 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/22 12:27:58 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

class Span {
    private:
        unsigned int        N; //max num of int the class can store
        std::vector <int>   container;
    public:
        Span();
        Span(unsigned int _N);
        ~Span();
        Span(const Span& object);
        Span& operator=(const Span& other);

        void addNumber(int newNum);
        void massAddNumber(int startingNum);
        void massAddStaggNumber(int startingNum);
        int shortestSpan();
        int longestSpan();

        class MaxSizeReached : public std::exception{
            public:
                const char* what() const noexcept override;
        };

        class NumberNotFound : public std::exception{
             public:
                const char* what() const noexcept override;
        };
};


//duplicates allowed?
