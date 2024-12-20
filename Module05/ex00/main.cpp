/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:31:37 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/14 15:41:02 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void){
    try {
        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: CREATING OBJECTS WITHIN THE VALID GRADE RANGE\n";
        Bureaucrat obj("Shepard", 3);
        std::cout << obj << std::endl;
        Bureaucrat obj2("Legion", 23);
        std::cout << obj2 << std::endl;
        Bureaucrat obj3("Garrus", 90);
        std::cout << obj3 << std::endl;
        Bureaucrat obj5("Miranda", 148);
        std::cout << obj5 << std::endl;
        Bureaucrat obj6;
        std::cout << obj6 <<"\n";

        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: CREATING OBJECTS OUTSIDE THE VALID GRADE RANGE\n";
        
        try{
            Bureaucrat obj4("Grunt", 160);
            std::cout << obj4 << std::endl;}
        catch (std::exception& ge){
            std::cout << "Error: " << ge.what() << std::endl;
        }

        try{
            Bureaucrat obj4("Liara", 0);
            std::cout << obj4 << std::endl;}
        catch (std::exception& ge){
            std::cout << "Error: " << ge.what() << std::endl;
        }    

        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: INCREMENTING\n";
        obj.increment();
        std::cout << obj << std::endl;
        obj.increment();
        std::cout << obj << std::endl;
        
        try{
             obj.increment(); //for testing exceptions
            std::cout << obj << std::endl; }
        catch (std::exception& ge){
            std::cout << "Error: " << ge.what() << std::endl;
        }
        
        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: DECREMENTING\n";
        obj5.decrement();
        std::cout << obj5 << std::endl;
        obj5.decrement();
        std::cout << obj5 << std::endl;
        
        try{
            obj5.decrement(); //for testing exceptions
            std::cout << obj5 << std::endl; }
        catch (std::exception& ge){
            std::cout << "Error: " << ge.what() << std::endl;
        }

        std::cout << "*--------------------------------------------------------------*\n";
    }
    catch (std::exception& ge){
        std::cout << "Error: " << ge.what() << std::endl;
    }
}
