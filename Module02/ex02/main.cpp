/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:39:23 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/22 14:28:09 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;

    // Fixed a;
    // Fixed const b( 10 );
    // Fixed const c( 42.42f );
    // Fixed const d( b );

    // a = Fixed( 1234.4321f );

    // // std::cout.precision(2);

    // std::cout << "a is " << a << std::endl;
    // std::cout << "b is " << b << std::endl;
    // std::cout << "c is " << c << std::endl;
    // std::cout << "d is " << d << std::endl;

    // std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    // std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    // std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    // std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    // // std::cout << std::fixed;
    // std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    // std::cout << "b is " << b.toFloat() << " as float" << std::endl;
    // std::cout << "c is " << c.toFloat() << " as float" << std::endl;
    // std::cout << "d is " << d.toFloat() << " as float" << std::endl;

    // return 0;
}