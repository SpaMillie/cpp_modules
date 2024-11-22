/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:37:21 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/22 17:31:44 by mspasic          ###   ########.fr       */
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
        Fixed(const Fixed &obj);
        Fixed& operator=(const Fixed& other);
        ~Fixed();

        bool operator>(const Fixed& other);
        bool operator<(const Fixed& other);
        bool operator>=(const Fixed& other);
        bool operator<=(const Fixed& other);
        bool operator==(const Fixed& other);
        bool operator!=(const Fixed& other);
        
        float operator+(const Fixed& other);
        float operator-(const Fixed& other);
        float operator*(const Fixed& other);
        float operator/(const Fixed& other);

        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;

        static Fixed&  min(Fixed& obj1, Fixed& obj2);
        static Fixed&  min(const Fixed& obj1, const Fixed& obj2);
        static Fixed&  max(Fixed& obj1, Fixed& obj2);
        static Fixed&  max(const Fixed& obj1, const Fixed& obj2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif