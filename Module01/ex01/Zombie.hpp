/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:57:24 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/08 10:35:47 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
    private:
        std::string z_name;
    public:
        void    announce(void) const;
        void    set_name(std::string name);
        Zombie();
        ~Zombie();
};

//zombieHorde.cpp
Zombie *zombieHorde(int N, std::string name);

#endif
