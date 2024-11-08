/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:55:42 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/08 20:40:08 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {
    private:
        std::string type;
    public:
        const std::string& getType(void); //fun fact: for efficiency sake, pass an object by reference instead of copying the whole thing + const means it's safer
        void    setType(std::string new_one);
        Weapon(const std::string& new_one);
        Weapon();
        ~Weapon();
};

#endif