/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:31:37 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/09 13:09:55 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
// #include "Form.hpp"

int main(void){
    {
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
            // Bureaucrat obj6(obj5); //testing the copy constructor
            // std::cout << obj6 << std::endl;

            Form form1("Shepardise", 4, 76);
            std::cout << form1 << std::endl;
            Form form2("Legionise", 34, 1);
            std::cout << form2 << std::endl;
            Form form3("Garrusise", 45, 90);
            std::cout << form3 << std::endl;
            Form form4("Mirandise", 150, 7);
            std::cout << form4 << std::endl;
            // Form form5(form3); //testing the copy cnstructor 
            // std::cout << form5 << std::endl;

            // std::cout << "*--------------------------------------------------------------*\n";
            // std::cout << "TEST: CREATING OBJECTS OUTSIDE THE VALID GRADE RANGE\n";
            // Bureaucrat obj6("Grunt", 160);
            // std::cout << obj6 << std::endl;
            // Bureaucrat obj4("Liara", 0);
            // std::cout << obj4 << std::endl;
            // Form form6("Gruntise", 234, 1);
            // std::cout << form6 << std::endl;
            // Form form7("Liarise", 3, 0);
            // std::cout << form7 << std::endl;

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
        catch (const Bureaucrat& ge){
            std::cout << "Error: " << ge.what() << std::endl;
        }
        catch (const Form& ge){
            std::cout << "Error: " << ge.what() << std::endl;
        }
    }
    {
        try {
            std::cout << "\n";
            Bureaucrat obj1("Lady Gaga", 4);
          

            std::cout << "*--------------------------------------------------------------*\n";
            std::cout << "TEST: BE_SIGNED MEMBER FUNCTION; VALID\n";
            Form form1("an autograph", 4, 8);
            std::cout << "Form is signed: " << form1.getState() << std::endl;
            form1.beSigned(obj1);
            std::cout << "Form is signed: " << form1.getState() << std::endl;
            form1.beSigned(obj1);
            std::cout << "Form is signed: " << form1.getState() << std::endl;
            std::cout << "*--------------------------------------------------------------*\n";
            // std::cout << "TEST: BE_SIGNED MEMBER FUNCTION; INVALID\n";
            // Form form2("Disease", 4, 8);
            // std::cout << "Form is signed: " << form2.getState() << std::endl;
            // obj1.decrement();
            // form2.beSigned(obj1);
            // std::cout << "Form is signed: " << form2.getState() << std::endl;
            // std::cout << "*--------------------------------------------------------------*\n";
        }
        catch (const Bureaucrat& fi){
           std::cout << "Error: " << fi.getName() << " " << fi.what() << std::endl; 
        }
        catch (const Form& ge){
            std::cout << "Error: " << ge.getName() << " " << ge.what() << std::endl;
        }
    }
}
