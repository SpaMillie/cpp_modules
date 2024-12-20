/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:31:37 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/14 16:59:34 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void test1(){
    Bureaucrat obj6("Grunt", 160);
}

void test2(){
    Bureaucrat obj4("Liara", 0);
}

void test3(){
    Form form6("Gruntise", 234, 1);
}

void test4(){
    Form form7("Liarise", 3, 0);   
}

int main(void){
    {
        try{
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
        // Bureaucrat obj6(Bureaucrat("str", 432)); //testing the copy constructor
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

        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: CREATING OBJECTS OUTSIDE THE VALID GRADE RANGE\n";
        for (auto testing : {test1, test2, test3, test4}){
            try{
                testing();
            }
            catch (std::exception& e){
                std::cout << "Error: " << e.what() << "\n";
            }
        }
        std::cout << "\n";

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
        catch(const std::exception& e){
            std::cout << "Error: " << e.what() << "\n";
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
            try{
            std::cout << "TEST: BE_SIGNED MEMBER FUNCTION; INVALID\n";
            Form form2("Disease", 4, 8);
            std::cout << "Form is signed: " << form2.getState() << std::endl;
            obj1.decrement();
            form2.beSigned(obj1);
            std::cout << "Form is signed: " << form2.getState() << std::endl;
            std::cout << "*--------------------------------------------------------------*\n";}
            catch(const std::exception& e){
                std::cout << "Error: " << e.what() << std::endl;
            }
            std::cout << "\n";
        }
        catch (const std::exception& fi){
           std::cout << "Error: " << fi.what() << std::endl; 
        }
    }
}
