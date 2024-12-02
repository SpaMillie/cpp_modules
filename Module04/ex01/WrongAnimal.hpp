/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:33 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/29 17:40:57 by mspasic          ###   ########.fr       */
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
        virtual ~WrongAnimal();
        void makeSound(void) const;
        std::string getType(void) const;
        void    setType(std::string type);
};

#endif
