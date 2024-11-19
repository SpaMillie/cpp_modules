/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:57:24 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/19 15:26:15 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        void    announce(void) const;
        void    set_name(std::string z_name);
        Zombie();
        ~Zombie();
};

//zombieHorde.cpp
Zombie* zombieHorde(int N, std::string name);

#endif
