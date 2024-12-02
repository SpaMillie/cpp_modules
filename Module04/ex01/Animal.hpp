/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:07 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/02 18:33:01 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal& obj);
        Animal& operator=(const Animal& other);
        virtual ~Animal();
        virtual void makeSound(void) const;
        std::string getType(void) const;
};

#endif
