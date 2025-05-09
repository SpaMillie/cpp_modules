/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:39:38 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/19 20:48:23 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class T> Array<T>::Array() : _length(0){
    try{
        _array = new T[_length];
    }
    catch(std::exception &e){
        std::cout << "Error: object creation failed: " << e.what() << "\n";
    }
}

template <class T> Array<T>::Array(unsigned int n): _length(n){
    try {
        _array = new T[_length];
    }
    catch(std::exception &e){
        std::cout << "Error: object creation failed: " << e.what() << "\n";
    }
}

template <class T> Array<T>::Array(const Array& obj){
    try{
        _length = obj._length;
        _array = new T[_length];
        for (unsigned int i = 0; i < _length; i++){ //check what happens if it's empty of nullptr
            _array[i] = obj._array[i];
        }
    }
    catch(std::exception &e){
        std::cout << "Error: copy constructor failed: " << e.what() << "\n";
    }
}

template <class T>
const Array<T>& Array<T>::operator=(const Array& obj){
    try{
        if (this != &obj){
            if (_array)
                delete [] _array;
            _length = obj._length;
            _array = new T[_length];
            for (unsigned int i = 0; i < _length; i++){ //check what happens if it's empty of nullptr
                _array[i] = obj._array[i];
            }
        }
    }
    catch(std::exception &e){
        std::cout << "Error: copy constructor failed: " << e.what() << "\n";
    }
    return (*this);
}

template <class T> Array<T>::~Array(){
    if (_array)
        delete [] _array;
}

template <class T>
T& Array<T>::operator[](unsigned int i){
    if (i >= _length)
        throw std::out_of_range("the value provided is out of the allocated range");
    return (_array[i]);
}

template <class T>
const T& Array<T>::operator[](unsigned int i) const{
    if (i >= _length)
        throw std::out_of_range("the value provided is out of the allocated range");
    return (_array[i]);
}

template <class T>
T& Array<T>::at(unsigned int i){
    if (i >= _length)
        throw std::out_of_range("the value provided is out of the allocated range");
    return (_array[i]);
}

template <class T>
const T& Array<T>::at(unsigned int i) const{
    if (i >= _length)
        throw std::out_of_range("the value provided is out of the allocated range");
    return (_array[i]);
}

template <class T> unsigned int Array<T>::size() const{
    return (_length);
}

template <class T>
void Array<T>::printAll() const{
    if (_array){
        for (unsigned int i = 0; i < _length; i++){
            std::cout << _array[i] << std::endl;
        }
    }
}