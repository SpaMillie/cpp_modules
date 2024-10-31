/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:48:26 by mspasic           #+#    #+#             */
/*   Updated: 2024/10/31 10:22:39 by mspasic          ###   ########.fr       */
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
        void    get_name(void) const;
        void    get_l_name(void) const;
        void    get_n_name(void) const;
        void    get_num(void) const;
        void    get_secr(void) const;
};

#endif
