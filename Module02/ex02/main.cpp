/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:39:23 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/22 18:08:02 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    // Fixed c(40);
    // Fixed d(a);

    // std::cout << c << std::endl << d << std::endl;

    // d = c;

    // std::cout << d << std::endl;

    // Fixed const f (2.16f);

    // // d = (d + a);
    // std::cout << d << " - " << a << " = " << (d - a) << std::endl;
    // // d = (d - a);
    // std::cout << d << " + " << a << " = " << (d + a) << std::endl;
    // // d = (c * d);
    // std::cout << d << " * " << c << " = " << (d * c) << std::endl;
    // // d = (d / c);
    // std::cout << d << " / " << c << " = " << (d / c) << std::endl;

    // std::cout << c << " > " << b << " = " << (c > b) << std::endl;
    // std::cout << c << " < " << b << " = " << (c < b) << std::endl;
    // std::cout << c << " >= " << b << " = " << (c >= b) << std::endl;
    // std::cout << c << " <= " << b << " = " << (c <= b) << std::endl;
    // std::cout << c << " == " << b << " = " << (c == b) << std::endl;
    // std::cout << c << " != " << b << " = " << (c != b) << std::endl;

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    // std::cout << --a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a-- << std::endl;
    // std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
    // std::cout << "max between " << a << " and " << c << " is " << Fixed::max(a, c) <<std::endl;
    // std::cout << "min between " << a << " and " << c << " is " << Fixed::min(a, c) <<std::endl;
    // std::cout << "max between " << b << " and " << f << " is " << Fixed::max(b, f) <<std::endl;
    // std::cout << "min between " << b << " and " << f << " is " << Fixed::min(b, f) <<std::endl;
    return 0;
}