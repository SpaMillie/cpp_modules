/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:22 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/29 17:06:58 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog:public Animal{
    public:
        Dog();
        Dog(const Dog& obj);
        Dog& operator=(const Dog& other);
        ~Dog();
        void    makeSound(void) const override;
};

#endif
