/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:22 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/02 14:25:19 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog:public Animal{
    private:
        Brain *thoughts;
    public:
        Dog();
        Dog(const Dog& obj);
        Dog& operator=(const Dog& other);
        ~Dog();
        void    makeSound(void) const override;
        std::string getAnIdea(int index) const;
};

#endif
