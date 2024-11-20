/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:37:21 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/20 19:39:00 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{
    private:
        int value;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const int param_int);
        Fixed(const float param_fl);
        Fixed(Fixed &obj);
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

#endif