/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:33 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/29 15:20:49 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        // Animal(std::string type);
        WrongAnimal(const WrongAnimal& obj);
        WrongAnimal& operator=(const WrongAnimal& other);
        ~WrongAnimal();
        void make_sound(void) const;
        std::string get_type(void) const;
        void    set_type(std::string type);
};

#endif
