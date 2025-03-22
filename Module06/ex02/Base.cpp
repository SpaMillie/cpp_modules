/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:48:59 by mspasic           #+#    #+#             */
/*   Updated: 2025/03/22 12:15:39 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
# include <cstdlib>
# include <iostream>
# include <stdlib.h>

Base*   Base::generate(void){
    srand(static_cast<unsigned int>(time(0))); 
    int random = 1 + rand() % 3;
    switch (random){
        case 1:
            std::cout << "Created an object of class A!\n";
            return (new A);
        case 2:
            std::cout << "Created an object of class B!\n";
            return (new B);
        case 3:
            std::cout << "Created an object of class C!\n";
            return (new C);
        default:
            return nullptr;
    }
}

void    Base::identify(Base* p){
    if (dynamic_cast<A*>(p) != nullptr){
        std::cout << "This is a pointer of Derived class A!\n";
    }
    else if (dynamic_cast<B*>(p) != nullptr){
        std::cout << "This is a pointer of Derived class B!\n";
    }
    else if (dynamic_cast<C*>(p) != nullptr){
        std::cout << "This is a pointer of Derived class C!\n";
    }
    else{
        std::cout << "This is neither A, B, nor C!\n";
    }
}

// void    Base::identify(Base& p){
//     if (dynamic_cast<A*>(&p) != nullptr){
//         std::cout << "This is a pointer of Derived class A!\n";
//     }
//     else if (dynamic_cast<B*>(&p) != nullptr){
//         std::cout << "This is a pointer of Derived class B!\n";
//     }
//     else if (dynamic_cast<C*>(&p) != nullptr){
//         std::cout << "This is a pointer of Derived class C!\n";
//     }
//     else{
//         std::cout << "This is neither A, B, nor C!\n";
//     }
// }

void    Base::touch_grass(){
    return;
}

bool    try_A(Base& p){
    try{
        A& obj = dynamic_cast<A&>(p);
        obj.touch_grass();
        return true;
    }
    catch(std::exception& e){
        return false;
    }
}

bool    try_B(Base& p){
    try{
        B& obj = dynamic_cast<B&>(p);
        obj.touch_grass();
        return true;
    }
    catch(std::exception& e){
        return false;
    }
}

bool    try_C(Base& p){
    try{
        C& obj = dynamic_cast<C&>(p);
        obj.touch_grass();
        return true;
    }
    catch(std::exception& e){
        return false;
    }
}

void    Base::identify(Base& p){
    if (try_A(p) == true)
        std::cout << "This is a reference of Derived class A!\n";
    else if (try_B(p) == true)
        std::cout << "This is a reference of Derived class B!\n";
    else if (try_C(p) == true)
        std::cout << "This is a reference of Derived class C!\n";
    else
        std::cout << "This is neither A, B, nor C!\n"; 
}
