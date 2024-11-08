/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:08:15 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/08 20:35:41 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon& wRef;
    public:
        void    attack(void) const;
        HumanA(std::string name_one, Weapon& cur_one);
        ~HumanA();
};

#endif