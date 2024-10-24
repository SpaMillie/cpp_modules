/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:48:26 by mspasic           #+#    #+#             */
/*   Updated: 2024/10/24 19:46:57 by mspasic          ###   ########.fr       */
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
    Contact(std::string nm, std::string l_nm, std::string n_nm, std::string num, std::string scrt)
    {
        name = nm;
        last_name = l_nm;
        nickname = n_nm;
        phonenumber = num;
        darkest_secret = scrt;
    }

    ~Contact() {}

    void    adding_contact(size_t i) const;

    // void    set_values(std::string nm, std::string l_nm, std::string n_nm, std::string num, std::string scrt);
};

#endif
