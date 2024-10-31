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

std::string Contact::get_name(void) const
{
    return name;
}

std::string Contact::get_l_name(void) const
{
    return last_name;
}

std::string Contact::get_n_name(void) const
{
    return nickname;
}

std::string Contact::get_num(void) const
{
    return phonenumber;
}

std::string Contact::get_secr(void) const
{
    return darkest_secret;
}
