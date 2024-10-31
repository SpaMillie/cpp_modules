#include "include/Contact.hpp"

void    Contact::set_name(std::string str)
{
    name = str;
}

void    Contact::set_l_name(std::string str)
{
    last_name = str;
}

void    Contact::set_n_name(std::string str)
{
    nickname = str;
}

void    Contact::set_num(std::string str)
{
    phonenumber = str;
}

void    Contact::set_secr(std::string str) 
{
    darkest_secret = str;
}

void    Contact::get_name(void) const
{
    std::cout << name;
}

void    Contact::get_l_name(void) const
{
    std::cout << last_name;
}

void    Contact::get_n_name(void) const
{
    std::cout << nickname;
}

void    Contact::get_num(void) const
{
    std::cout << phonenumber;
}

void    Contact::get_secr(void) const
{
    std::cout << darkest_secret;
}
