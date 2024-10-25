#include "Contact.hpp"

void    set_name(std::string str)
{
    name = str;
}

void    set_l_name(std::string str)
{
    last_name = str;
}

void    set_n_name(std::string str)
{
    nickname = str;
}

void    set_num(std::string str)
{
    phonenumber = str;
}

void    set_secr(std::string str)
{
    darkest_secret = str;
}

void    get_name()
{
    std::cout << name;
}

void    get_l_name()
{
    std::cout << last_name;
}

void    get_n_name()
{
    std::cout << nickname;
}

void    get_num()
{
    std::cout << phonenumber;
}

void    get_secr()
{
    std::cout << darkest_secret;
}
