/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:31:37 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/13 19:32:04 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main(void){
    {
        Bureaucrat obj1("Kwaltz", 4);
        Bureaucrat obj6("randomVogon", 150);
        Intern obj;
        Form *obj2 = obj.makeForm("shrubbery creation", "Ford Perfect");
        Form *obj3 = obj.makeForm("robotomy request", "Marvin the Paranoid Android");
        Form *obj4 = obj.makeForm("presidential pardon", "Arthur Dent");
        Form obj7("Trillian", 23, 45);
        std::cout << "\n";
        try{
            Form *obj5 = obj.makeForm("something else", "Test");
            obj5->beSigned(obj1);
        }
        catch (const std::exception& e){
            std::cout << "Error: " << e.what() << "\n";
        }
        try{
            Form obj5;
            std::cout << obj5 << "\n";
        }
        catch (const std::exception& e){
            std::cout << "Error: " << e.what() << "\n";
        }
        try{
            Form obj5("Tester", 161, 150);
            std::cout << obj5 << "\n";
        }
        catch (const std::exception& e){
            std::cout << "Error: " << e.what() << "\n";
        }
        try{
            Form obj5("Tester", -23, 150);
            std::cout << obj5 << "\n";
        }
        catch (const std::exception& e){
            std::cout << "Error: " << e.what() << "\n";
        }
        std::cout << "\n";

        std::cout << "TEST: OVERLOADED INSERTION OPERATOR\n";
        std::cout << *obj2 << "\n";
        std::cout << *obj3 << "\n";
        std::cout << *obj4 << "\n";
        std::cout << obj7 << "\n";
        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: EXECUTING WHEN NOT SIGNED\n";
        std::cout << "Form is signed: " << obj2->getState() << std::endl;
        obj2->execute(obj1); 
        std::cout << "Form is signed: " << obj3->getState() << std::endl;
        obj3->execute(obj1); 
        std::cout << "Form is signed: " << obj4->getState() << std::endl;
        obj4->execute(obj1);
        std::cout << "Form is signed: " << obj7.getState() << std::endl;
        obj7.execute(obj1);
        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: SIGNING\n";
        std::cout << "Form is signed: " << obj2->getState() << std::endl;
        obj2->beSigned(obj1);
        std::cout << "Form is signed: " << obj2->getState() << std::endl;
        obj2->beSigned(obj1);
        std::cout << "Form is signed: " << obj2->getState() << "\n\n";
        std::cout << "Form is signed: " << obj3->getState() << std::endl;
        obj3->beSigned(obj1);
        std::cout << "Form is signed: " << obj3->getState() << std::endl;
        obj3->beSigned(obj1);
        std::cout << "Form is signed: " << obj3->getState() << "\n\n";
        std::cout << "Form is signed: " << obj4->getState() << std::endl;
        obj4->beSigned(obj1);
        std::cout << "Form is signed: " << obj4->getState() << std::endl;
        obj4->beSigned(obj1);
        std::cout << "Form is signed: " << obj4->getState() << "\n\n";            
        std::cout << "Form is signed: " << obj7.getState() << std::endl;
        obj7.beSigned(obj1);
        std::cout << "Form is signed: " << obj7.getState() << std::endl;
        obj7.beSigned(obj1);
        std::cout << "Form is signed: " << obj7.getState() << "\n\n"; 
        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: EXECUTING WHEN SIGNED\n";
        std::cout << "Form is signed: " << obj2->getState() << std::endl;
        obj2->execute(obj1); 
        std::cout << "Form is signed: " << obj3->getState() << std::endl;
        obj3->execute(obj1); 
        std::cout << "Form is signed: " << obj4->getState() << std::endl;
        obj4->execute(obj1);
        std::cout << "Form is signed: " << obj7.getState() << std::endl;
        obj7.execute(obj1);
        std::cout << "*--------------------------------------------------------------*\n";

        delete(obj2);
        delete(obj3);
        delete(obj4);
    }
    { std::cout << "\n*INTERMISSION*\n\n";}
    {
        Bureaucrat obj("Kwaltz", 4);
        Bureaucrat obj1("RandomVogon", 148);
        Intern obj5;
        Form *obj2 = obj5.makeForm("shrubbery creation", "Ford Perfect");
        Form *obj3 = obj5.makeForm("robotomy request", "Marvin the Paranoid Android");
        Form *obj4 = obj5.makeForm("presidential pardon", "Arthur Dent");

        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: EXECUTING WHEN NOT SIGNED\n";
        std::cout << "Form is signed: " << obj2->getState() << std::endl;
        obj2->execute(obj1); 
        std::cout << "Form is signed: " << obj3->getState() << std::endl;
        obj3->execute(obj1); 
        std::cout << "Form is signed: " << obj4->getState() << std::endl;
        obj4->execute(obj1);
        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: SIGNING\n";
        try{
        std::cout << "Form is signed: " << obj2->getState() << std::endl;
        obj2->beSigned(obj);
        std::cout << "Form is signed: " << obj2->getState() << std::endl;
        obj2->beSigned(obj1);
        std::cout << "Form is signed: " << obj2->getState() << "\n\n";  
        std::cout << "*--------------------------------------------------------------*\n";
        }
        catch (const std::exception& e){
            std::cout << "Error: " << e.what() << "\n";
        }
        delete(obj2);
        delete(obj3);
        delete(obj4);
    }
}
