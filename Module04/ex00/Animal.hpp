/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:07 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/29 15:19:31 by mspasic          ###   ########.fr       */
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
        // Animal(std::string type);
        Animal(const Animal& obj);
        Animal& operator=(const Animal& other);
        ~Animal();
        virtual void make_sound(void) const;
        std::string get_type(void) const;
        void    set_type(std::string type);
};

#endif
