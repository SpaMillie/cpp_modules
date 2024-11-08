/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:40:36 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/08 18:45:44 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon cur;
    public:
        void    attack(void);
        void    setWeapon(Weapon cur_one);
        HumanB(std::string name_one);
        ~HumanB();
};

#endif