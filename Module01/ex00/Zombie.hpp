/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:57:24 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/19 15:27:27 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        void        announce(void) const;
        Zombie(std::string z_name);
        ~Zombie();
};

//newZombie.cpp
Zombie  *newZombie(std::string name);
//randomChump.cpp
void    randomChump(std::string name);

#endif
