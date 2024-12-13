/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:31:37 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/13 18:10:32 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"


int main(void)
    {
        Bureaucrat obj1("Kwaltz", 4);
        Intern obj;
        Form *obj2 = obj.makeForm("shrubbery creation", "Ford Perfect");
        Form *obj3 = obj.makeForm("robotomy request", "Marvin the Paranoid Android");
        Form *obj4 = obj.makeForm("presidential pardon", "Arthur Dent");
        try{
            Form *obj5 = obj.makeForm("something else", "Test");
            obj5->beSigned(obj1);
        }
        catch (const std::exception& e){
            std::cout << "Error: " << e.what() << "\n";
        }

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
        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: EXECUTING WHEN SIGNED\n";
        std::cout << "Form is signed: " << obj2->getState() << std::endl;
        obj2->execute(obj1); 
        std::cout << "Form is signed: " << obj3->getState() << std::endl;
        obj3->execute(obj1); 
        std::cout << "Form is signed: " << obj4->getState() << std::endl;
        obj4->execute(obj1);
        std::cout << "*--------------------------------------------------------------*\n";

        delete(obj2);
        delete(obj3);
        delete(obj4);
    }
//     { std::cout << "\n*INTERMISSION*\n\n";}
//     {
//         try{
//             Bureaucrat obj1("RandomVogon", 23);
//             ShrubberyCreationForm obj2 ("Ford Prefect");
//             RobotomyRequestForm obj3 ("Marvin the Paranoid Android");
//             PresidentialPardonForm obj4 ("Arthur Dent");

//             std::cout << "*--------------------------------------------------------------*\n";
//             std::cout << "TEST: EXECUTING WHEN NOT SIGNED\n";
//             std::cout << "Form is signed: " << obj2.getState() << std::endl;
//             obj2.execute(obj1); 
//             std::cout << "Form is signed: " << obj3.getState() << std::endl;
//             obj3.execute(obj1); 
//             std::cout << "Form is signed: " << obj4.getState() << std::endl;
//             obj4.execute(obj1);
//             std::cout << "*--------------------------------------------------------------*\n";
//             std::cout << "TEST: SIGNING\n";
//             std::cout << "Form is signed: " << obj2.getState() << std::endl;
//             obj2.beSigned(obj1);
//             std::cout << "Form is signed: " << obj2.getState() << std::endl;
//             obj2.beSigned(obj1);
//             std::cout << "Form is signed: " << obj2.getState() << "\n\n";
//             std::cout << "Form is signed: " << obj3.getState() << std::endl;
//             obj3.beSigned(obj1);
//             std::cout << "Form is signed: " << obj3.getState() << std::endl;
//             obj3.beSigned(obj1);
//             std::cout << "Form is signed: " << obj3.getState() << "\n\n";
//             std::cout << "Form is signed: " << obj4.getState() << std::endl;
//             obj4.beSigned(obj1);
//             std::cout << "Form is signed: " << obj4.getState() << std::endl;
//             obj4.beSigned(obj1);
//             std::cout << "Form is signed: " << obj4.getState() << "\n\n";            
//             std::cout << "*--------------------------------------------------------------*\n";
//             std::cout << "TEST: EXECUTING WHEN SIGNED\n";
//             std::cout << "Form is signed: " << obj2.getState() << std::endl;
//             obj2.execute(obj1); 
//             std::cout << "Form is signed: " << obj3.getState() << std::endl;
//             obj3.execute(obj1); 
//             std::cout << "Form is signed: " << obj4.getState() << std::endl;
//             obj4.execute(obj1);
//             std::cout << "*--------------------------------------------------------------*\n";
//         }
//         catch (const std::exception& e){
//             std::cout << "Error: " << e.what() << "\n";
//         }
//     }
//     { std::cout << "\n*INTERMISSION*\n\n";}
//     {
//         try{
//             Bureaucrat obj1("RandomVogon", 42);
//             ShrubberyCreationForm obj2 ("Ford Prefect");
//             RobotomyRequestForm obj3 ("Marvin the Paranoid Android");
//             PresidentialPardonForm obj4 ("Arthur Dent");

//             std::cout << "*--------------------------------------------------------------*\n";
//             std::cout << "TEST: EXECUTING WHEN NOT SIGNED\n";
//             std::cout << "Form is signed: " << obj2.getState() << std::endl;
//             obj2.execute(obj1); 
//             std::cout << "Form is signed: " << obj3.getState() << std::endl;
//             obj3.execute(obj1); 
//             std::cout << "Form is signed: " << obj4.getState() << std::endl;
//             obj4.execute(obj1);
//             std::cout << "*--------------------------------------------------------------*\n";
//             std::cout << "TEST: SIGNING\n";
//             std::cout << "Form is signed: " << obj2.getState() << std::endl;
//             obj2.beSigned(obj1);
//             std::cout << "Form is signed: " << obj2.getState() << std::endl;
//             obj2.beSigned(obj1);
//             std::cout << "Form is signed: " << obj2.getState() << "\n\n";
//             std::cout << "Form is signed: " << obj3.getState() << std::endl;
//             obj3.beSigned(obj1);
//             std::cout << "Form is signed: " << obj3.getState() << std::endl;
//             obj3.beSigned(obj1);
//             std::cout << "Form is signed: " << obj3.getState() << "\n\n";
//             std::cout << "Form is signed: " << obj4.getState() << std::endl;
//             obj4.beSigned(obj1);
//             std::cout << "Form is signed: " << obj4.getState() << std::endl;
//             obj4.beSigned(obj1);
//             std::cout << "Form is signed: " << obj4.getState() << "\n\n";            
//             std::cout << "*--------------------------------------------------------------*\n";
//             std::cout << "TEST: EXECUTING WHEN SIGNED\n";
//             std::cout << "Form is signed: " << obj2.getState() << std::endl;
//             obj2.execute(obj1); 
//             std::cout << "Form is signed: " << obj3.getState() << std::endl;
//             obj3.execute(obj1); 
//             std::cout << "Form is signed: " << obj4.getState() << std::endl;
//             obj4.execute(obj1);
//             std::cout << "*--------------------------------------------------------------*\n";
//         }
//         catch (const std::exception& e){
//             std::cout << "Error: " << e.what() << "\n";
//         }
//     }
//     { std::cout << "\n*INTERMISSION*\n\n";}
//     {
//         Bureaucrat obj("Kwaltz", 4);
//         Bureaucrat obj1("RandomVogon", 70);
//         ShrubberyCreationForm obj2 ("Ford Prefect");
//         RobotomyRequestForm obj3 ("Marvin the Paranoid Android");
//         PresidentialPardonForm obj4 ("Arthur Dent");

//         std::cout << "*--------------------------------------------------------------*\n";
//         std::cout << "TEST: EXECUTING WHEN NOT SIGNED\n";
//         std::cout << "Form is signed: " << obj2.getState() << std::endl;
//         obj2.execute(obj1); 
//         std::cout << "Form is signed: " << obj3.getState() << std::endl;
//         obj3.execute(obj1); 
//         std::cout << "Form is signed: " << obj4.getState() << std::endl;
//         obj4.execute(obj1);
//         std::cout << "*--------------------------------------------------------------*\n";
//         std::cout << "TEST: SIGNING\n";
//         std::cout << "Form is signed: " << obj2.getState() << std::endl;
//         obj2.beSigned(obj1);
//         std::cout << "Form is signed: " << obj2.getState() << std::endl;
//         obj2.beSigned(obj1);
//         std::cout << "Form is signed: " << obj2.getState() << "\n\n";
//         std::cout << "Form is signed: " << obj3.getState() << std::endl;
//         obj3.beSigned(obj1);
//         std::cout << "Form is signed: " << obj3.getState() << std::endl;
//         obj3.beSigned(obj1);
//         std::cout << "Form is signed: " << obj3.getState() << "\n\n";
//         std::cout << "Form is signed: " << obj4.getState() << std::endl;
//         obj4.beSigned(obj);
//         std::cout << "Form is signed: " << obj4.getState() << std::endl;
//         obj4.beSigned(obj);
//         std::cout << "Form is signed: " << obj4.getState() << "\n\n";            
//         std::cout << "*--------------------------------------------------------------*\n";
//         try {
//             std::cout << "TEST: EXECUTING WHEN SIGNED\n";
//             std::cout << "Form is signed: " << obj2.getState() << std::endl;
//             obj2.execute(obj1); 
//             std::cout << "Form is signed: " << obj3.getState() << std::endl;
//             obj3.execute(obj); 
//             obj3.execute(obj1);
//             std::cout << "*--------------------------------------------------------------*\n";
//         }
//         catch (const std::exception& e){
//             std::cout << "Error: " << e.what() << "\n";
//         }
//     }
//     { std::cout << "\n*INTERMISSION*\n\n";}
//     {
//         Bureaucrat obj("Kwaltz", 4);
//         Bureaucrat obj1("RandomVogon", 130);
//         ShrubberyCreationForm obj2 ("Ford Prefect");
//         RobotomyRequestForm obj3 ("Marvin the Paranoid Android");
//         PresidentialPardonForm obj4 ("Arthur Dent");

//         std::cout << "*--------------------------------------------------------------*\n";
//         std::cout << "TEST: EXECUTING WHEN NOT SIGNED\n";
//         std::cout << "Form is signed: " << obj2.getState() << std::endl;
//         obj2.execute(obj1); 
//         std::cout << "Form is signed: " << obj3.getState() << std::endl;
//         obj3.execute(obj1); 
//         std::cout << "Form is signed: " << obj4.getState() << std::endl;
//         obj4.execute(obj1);
//         std::cout << "*--------------------------------------------------------------*\n";
//         std::cout << "TEST: SIGNING\n";
//         std::cout << "Form is signed: " << obj2.getState() << std::endl;
//         obj2.beSigned(obj1);
//         std::cout << "Form is signed: " << obj2.getState() << std::endl;
//         obj2.beSigned(obj1);
//         std::cout << "Form is signed: " << obj2.getState() << "\n\n";         
//         std::cout << "*--------------------------------------------------------------*\n";
//         std::cout << "TEST: EXECUTING WHEN SIGNED\n";
//         try {
//             std::cout << "Form is signed: " << obj2.getState() << std::endl;
//             obj2.execute(obj);
//             obj2.execute(obj1);
//             std::cout << "Form is signed: " << obj3.getState() << std::endl;
//             std::cout << "*--------------------------------------------------------------*\n";
//         }
//         catch (const std::exception& e){
//             std::cout << "Error: " << e.what() << "\n";
//         }
//     }
//     { std::cout << "\n*INTERMISSION*\n\n";}
//     {
//         Bureaucrat obj("Kwaltz", 4);
//         Bureaucrat obj1("RandomVogon", 148);
//         ShrubberyCreationForm obj2 ("Ford Prefect");
//         RobotomyRequestForm obj3 ("Marvin the Paranoid Android");
//         PresidentialPardonForm obj4 ("Arthur Dent");

//         std::cout << "*--------------------------------------------------------------*\n";
//         std::cout << "TEST: EXECUTING WHEN NOT SIGNED\n";
//         std::cout << "Form is signed: " << obj2.getState() << std::endl;
//         obj2.execute(obj1); 
//         std::cout << "Form is signed: " << obj3.getState() << std::endl;
//         obj3.execute(obj1); 
//         std::cout << "Form is signed: " << obj4.getState() << std::endl;
//         obj4.execute(obj1);
//         std::cout << "*--------------------------------------------------------------*\n";
//         std::cout << "TEST: SIGNING\n";
//         try{
//         std::cout << "Form is signed: " << obj2.getState() << std::endl;
//         obj2.beSigned(obj);
//         std::cout << "Form is signed: " << obj2.getState() << std::endl;
//         obj2.beSigned(obj1);
//         std::cout << "Form is signed: " << obj2.getState() << "\n\n";  
//         std::cout << "*--------------------------------------------------------------*\n";
//         }
//         catch (const std::exception& e){
//             std::cout << "Error: " << e.what() << "\n";
//         }
//     }
//     { std::cout << "\n*INTERMISSION*\n\n";}
//     {
//         ShrubberyCreationForm obj2 ("Ford Prefect");
//         RobotomyRequestForm obj3 ("Marvin the Paranoid Android");
//         PresidentialPardonForm obj4 ("Arthur Dent");

//         std::cout << "*--------------------------------------------------------------*\n";
//         std::cout << "TEST: OVERLOADED INSERTION OPERATOR\n";
//         std::cout << obj2 << "\n";
//         std::cout << obj3 << "\n";
//         std::cout << obj4 << "\n";
//         std::cout << "*--------------------------------------------------------------*\n";
//     }
// }
