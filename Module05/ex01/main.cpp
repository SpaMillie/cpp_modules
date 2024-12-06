/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:31:37 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/06 16:52:13 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
        Form form1("Shepardise", 4, 76);
        std::cout << form1 << std::endl;
        Form form2("Legionise", 34, 1);
        std::cout << form2 << std::endl;
        Form form3("Garrusise", 45, 90);
        std::cout << form3 << std::endl;
        Form form4("Mirandise", 150, 7);
        std::cout << form4 << std::endl;

        // std::cout << "*--------------------------------------------------------------*\n";
        // std::cout << "TEST: CREATING OBJECTS OUTSIDE THE VALID GRADE RANGE\n";
        // Bureaucrat obj6("Grunt", 160);
        // std::cout << obj6 << std::endl;
        // Bureaucrat obj4("Liara", 0);
        // std::cout << obj4 << std::endl;

        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: INCREMENTING\n";
        obj.increment();
        std::cout << obj << std::endl;
        obj.increment();
        std::cout << obj << std::endl;
        // obj.increment(); //for testing exceptions
        // std::cout << obj << std::endl; 
        
        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: DECREMENTING\n";
        obj5.decrement();
        std::cout << obj5 << std::endl;
        obj5.decrement();
        std::cout << obj5 << std::endl;
        // obj5.decrement(); //for testing exceptions
        // std::cout << obj5 << std::endl;
        std::cout << "*--------------------------------------------------------------*\n";
    }
    catch (Bureaucrat& ge){
        std::cout << "Error: " << ge.what() << std::endl;
    }
    // try {
    //     //...
    // }
    // catch (const Bureaucrat& fi){
    //     //...
    // }
    // catch (const Form& ge){
    //     //...
    // }
}
