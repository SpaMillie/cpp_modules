/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:15 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/29 15:35:04 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat:public Animal{
    public:
        Cat();
        Cat(const Cat& obj);
        Cat& operator=(const Cat& other);
        ~Cat();
        void    make_sound(void) const override;
};

#endif