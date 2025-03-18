/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 20:41:55 by mspasic           #+#    #+#             */
/*   Updated: 2025/03/18 21:54:43 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main (void){
        try{
                Base* object = nullptr;
                
                std::cout << "*--------------------------------------------------------------*\n";
                std::cout << "TEST: IDENTIFY\n";
                A obj1;
                B obj2;
                C obj3;
                for (int i = 0; i < 3; i++){
                        switch(i){
                                case 0:
                                        object = &obj1;
                                        break;
                                case 1:
                                        object = &obj2;
                                        break;
                                case 2:
                                        object = &obj3;
                                        break;
                        }
                        object->identify(object);
                }
                std::cout << "*--------------------------------------------------------------*\n"; 
                std::cout << "TEST: EVERYTHING 5x\n";
                for (int i = 0; i < 5; i++){
                        object = object->generate();
                        Base& objectively = *object;
                        object->identify(object);
                        object->identify(objectively);
                        delete object;
                        object = nullptr;
                }
                std::cout << "*--------------------------------------------------------------*\n"; 
                
        }
        catch(std::exception& e){
                std::cout << "Error: " << e.what() << "\n";
        }
}