/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:46:25 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/22 18:10:11 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): value(0){
	std::cout << "Default constructor called\n";
};

Fixed::Fixed(const Fixed& obj){
	std::cout << "Copy constructor called\n";
	*this = obj;
}

Fixed& Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignment operator called\n";
	if (this == &other) //check if the cur_obj is the same as the one being assigned to it
		return (*this);
	value = other.getRawBits(); 
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return value;
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called\n";
	value = raw << bits;                                                   
}
