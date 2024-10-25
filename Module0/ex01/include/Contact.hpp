/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:48:26 by mspasic           #+#    #+#             */
/*   Updated: 2024/10/25 17:38:16 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
    private:
        std::string name;
        std::string last_name;
        std::string nickname;
        std::string phonenumber;
        std::string darkest_secret; 
    public:
        void    set_name(std::string str);
        void    set_l_name(std::string str);
        void    set_n_name(std::string str);
        void    set_num(std::string str);
        void    set_secr(std::string str);
        void    get_name(std::string str);
        void    get_l_name(std::string str);
        void    get_n_name(std::string str);
        void    get_num(std::string str);
        void    get_secr(std::string str);
};

#endif
