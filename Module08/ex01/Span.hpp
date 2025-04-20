/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:13:03 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/20 14:15:34 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Span {
    private:
        unsigned int _maxsize;
    public:
        Span();
        Span(unsigned int size);
        ~Span();
        Span(const Span& object);
        Span& operator=(const Span& other);


};
