/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:36:57 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/22 15:44:39 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():value(0){
    std::cout << "Default constructor called\n";
};

Fixed::Fixed(const int param_int){
    std::cout << "Int constructor called\n";
    setRawBits(param_int); 
}

Fixed::Fixed(const float param_fl){
    std::cout << "Float constructor called\n";
    this->value = (int)roundf((param_fl) * (1 << bits));
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
    std::cout << "Destructor called\n";
}

/* comparison operators */
bool Fixed::operator>(const Fixed& other){
    if (this->value > other.value)
        return (true);
    return (false);
}
        
bool Fixed::operator<(const Fixed& other){
    if (this->value < other.value)
        return (true);
    return (false);
}

bool Fixed::operator>=(const Fixed& other){
    if (this->value >= other.value)
        return (true);
    return (false);
}

bool Fixed::operator<=(const Fixed& other){
    if (this->value <= other.value)
        return (true);
    return (false);
}

bool Fixed::operator==(const Fixed& other){
    if (this->value == other.value)
        return (true);
    return (false);
}

bool Fixed::operator!=(const Fixed& other){
    if (this->value != other.value)
        return (true);
    return (false);
}

/* arithmetic operators */

int Fixed::operator+(const Fixed& other){
    return (this->value + other.value);
}

int Fixed::operator-(const Fixed& other){
    return (this->value - other.value);
}

int Fixed::operator*(const Fixed& other){
    return (this->value * other.value);
}

int Fixed::operator/(const Fixed& other){
    return (this->value / other.value);
}

/*increment and decrement operators*/

//++a        
Fixed& Fixed::operator++(){
    this->value += 1;
    return (*this);
}

//a++
Fixed Fixed::operator++(int n){
    Fixed temp = *this;
    this->value += 1;
    return (temp);
}

//--a
Fixed& Fixed::operator--(){
    this->value -= 1;
    return (*this);
}

//a++
Fixed Fixed::operator--(int n){
    Fixed temp = *this;
    this->value -= 1;
    return (temp);
}

int Fixed::getRawBits(void) const{
    return value;
}

void    Fixed::setRawBits(int const raw){
    value = raw << bits;
}

int   Fixed::toInt(void) const{
    return(this->value >> bits);
}

float   Fixed::toFloat(void) const{
    float intpart = this->value >> bits;
    float flpart = (float)(this->value & ((1 << bits) - 1)) / (1 << bits);
    return (intpart + flpart);
}

/*min and max*/
static Fixed&  min(Fixed& obj1, Fixed& obj2){
    if (obj1 < obj2)
        return (obj1);
}

static Fixed&  min(const Fixed& obj1, const Fixed& obj2){

}

static Fixed&  max(Fixed& obj1, Fixed& obj2){

}

static Fixed&  max(const Fixed& obj1, const Fixed& obj2){

}

std::ostream& operator<<(std::ostream& os, const Fixed& obj){
    os << obj.toFloat();
    return(os);
}
