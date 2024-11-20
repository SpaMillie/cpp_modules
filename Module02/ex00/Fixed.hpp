/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:46:52 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/20 15:36:47 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const Fixed& obj); //a copy constructor
		Fixed& operator=(const Fixed& other); //a copy assignment operator overload
		~Fixed();
		int getRawBits(void) const; //returns the raw value of the fixed-point value
		void setRawBits(int const raw); //sets the raw value of the fixed-point number
};

#endif