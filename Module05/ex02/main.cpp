/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:31:37 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/10 13:06:46 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void test1(){
    Bureaucrat obj6("Grunt", 160);
}

void test2(){
    Bureaucrat obj4("Liara", 0);
}

int main(void){
    {
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

        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: INCREMENTING\n";
        for (int i = 0; i < 4; i++){
            try {
                obj.increment();
                std::cout << obj << std::endl;}
            catch(std::exception& e){
                std::cout << "Error: " << e.what() << "\n";
            }
        }
        std::cout << "\n";
        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: DECREMENTING\n";
        for (int i = 0; i < 4; i++){
            try {
                obj5.decrement();
                std::cout << obj5 << std::endl;}
            catch(std::exception& e){
                std::cout << "Error: " << e.what() << "\n";
            }
        }
        std::cout << "\n";
        std::cout << "*--------------------------------------------------------------*\n";
    }
    {
        try {
            std::cout << "\n";
            Bureaucrat obj1("Kwaltz", 4);
            PresidentialPardonForm obj2 ("Arthur Dent");
            ShrubberyCreationForm obj3 ("Ford Prefect");
            RobotomyRequestForm obj4 ("Marvin the Paranoid Android");
            AForm *current;         

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
        catch (const std::exception& e){
            std::cout << "Error: " << e.what() << "\n";
        }
    }
}
{

}
