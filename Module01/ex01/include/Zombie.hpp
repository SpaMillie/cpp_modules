/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:57:24 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/07 18:23:37 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
    private:
        std::string z_name;
    public:
        void        announce(void);
        Zombie(std::string name);
        ~Zombie();
};

//zombieHorde.cpp
Zombie *zombieHorde(int N, std::string name);

#endif
