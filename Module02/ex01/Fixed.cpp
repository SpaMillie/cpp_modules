/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:36:57 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/21 14:25:44 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():value(0){};

Fixed::Fixed(const int param_int){
    std::cout << "Int constructor called\n";
    this->value = param_int << bits;
}

Fixed::Fixed(const float param_fl){
    std::cout << "Float constructor called\n";
    int temp = static_cast <int> (std::roundf(param_fl));
    this->value = temp << bits;
}

Fixed::Fixed(const Fixed &obj):value(obj.value){
    std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed& other){
    std::cout << "Copy assignment operator called\n";
    if (this == &other)
        return (*this);
    value = other.value;
    return (*this);
}

Fixed::~Fixed(){
    std::cout << "destructor called\n";
}

int Fixed::getRawBits(void) const{
    return value;
}

void    Fixed::setRawBits(int const raw)
{
    value = raw << bits;
}

int   Fixed::toInt(void) const{
    int temp = this->value >> bits;
    return(temp);
}

float   Fixed::toFloat(void) const{
    float temp = this->value >> bits;
    return(temp);
}
