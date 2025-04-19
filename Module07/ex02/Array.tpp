/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:39:38 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/19 18:13:47 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

//must use new []


//T is the template argument which is a placeholder for the data type used
//class is a keyword

template <class T> Array<T>::Array() : _length(0){
    try{
        _array = new T(_length);
    }
    catch(std::exception &e){
        std::cout << "Error: object creation failed: " << e.what() << "\n";
    }
}

template <class T> Array<T>::Array(unsigned int n): _length(n){
    try {
        _array = new T(_length);
    }
    catch(std::exception &e){
        std::cout << "Error: object creation failed: " << e.what() << "\n";
    }
}

template <class T> Array<T>::Array(const Array& obj){
    try{
        _length = obj.length;
        _array = new T(_length);
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
            _length = obj.length;
            _array = new T(_length);
            for (unsigned int i = 0; i < _length; i++){ //check what happens if it's empty of nullptr
                _array[i] = obj._array[i];
            }
        }
        return (*this);
    }
    catch(std::exception &e){
        std::cout << "Error: copy constructor failed: " << e.what() << "\n";
    }
}

template <class T> Array<T>::~Array(){
    if (_array)
        delete [] _array;
}

template <class T>
const T& Array<T>::operator[](unsigned int i){
    if (i >= _length)
        throw std::out_of_range;
    return (_array[i]);
}

template <class T>
const T& Array<T>::operator[](unsigned int i) const{
    if (i >= _length)
        throw std::out_of_range;
    return (_array[i]);
}

template <class T>
const T& Array<T>::at(unsigned int i){
    if (i >= _length)
        throw std::out_of_range;
    return (_array[i]);
}

template <class T>
const T& Array<T>::at(unsigned int i) const{
    if (i >= _length)
        throw std::out_of_range;
    return (_array[i]);
}

template <class T> unsigned int Array<T>::size(){
    unsigned int i = 0;
    while(_array && _array[i])
        i++;
    return (i);
}

template <class T> unsigned int Array<T>::size() const{
    unsigned int i = 0;
    while(_array && _array[i])
        i++;
    return (i);
}