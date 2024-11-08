#include <iostream>

//learning about references to strings
/*references are like aliases for an existing string objects
once bound to a string, they can't be changed to refer to another string
must be initialised when declared, so they can't ever be nullptr; this also means they are safer to use
i.e. you can't dereference a null pointer in this case because a reference can't be a nullptr
i.e. this means no needs for additional checks, the code looks cleaner, less clutter, and validity is guaranteed
changing the ref will change the string it is bound to, without need for dereferencing
syntax: std::string& ref = ...
the ref isnt an object so it should have the same address as its referent*/

int main(void)
{
    std::string str = "HI THIS IS BRAIN"; //a string variable
    std::string *stringPTR = &str; //a pointer to the string variable
    std::string &stringREF = str; //a reference to the string variable

    std::cout << "The memory address of the string is: " << &str << std::endl;
    std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;
    std::cout << "The value of the string is: " << str << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
    // std::cout << "The address of stringPTR itself: " << &(stringPTR) << std::endl;
    // auto pp = std::addressof(stringPTR);
    // std::cout << "The address of stringPTR itself check: " << pp << std::endl;
}