/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main copy.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:26 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/02 18:52:54 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void){
    {
        try {
            std::cout << "*--------------------------------------------------------------*\n";
            std::cout << "TEST: ANIMAL, CAT, DOG CLASSES, MEMBER FUNCTIONING\n";
            // const Animal* meta = new Animal(); //the Animal class is  abstract so this can't  be done
            const Animal* j = new Dog();
            const Animal* i = new Cat();

            std::cout << std::endl;
            std::cout << j->getType() << ": ";
            i->makeSound(); //will output the cat sound
            std::cout << i->getType() << ": ";
            j->makeSound(); //will output the dog sound
            // std::cout << meta->getType() << ": ";
            // meta->makeSound(); //will output the generic animal sound
            std::cout << std::endl;
            delete(j);
            delete(i);
            // delete(meta);

            std::cout << std::endl;
        }
        catch(std::bad_alloc& e){
            std::cout << "Allocation failed: " << e.what() << std::endl;
        }
    }
    {
        try {
            std::cout << "*--------------------------------------------------------------*\n";
            std::cout << "TEST: WRONGANIMAL, WRONGCAT CLASSES, MEMBER FUNCTIONING\n";
            const WrongAnimal *zeta = new WrongAnimal();
            const WrongAnimal *m = new WrongCat();
            WrongCat jest;

            std::cout << std::endl;
            std::cout << zeta->getType() << ": ";
            zeta->makeSound(); //will output the generic wronganimal sound
            std::cout << m->getType() << ": ";
            m->makeSound(); //will output the generic wronganimal sound 
            std::cout << jest.getType() << ": ";
            jest.makeSound(); //will output the wrongcat sound
            std::cout << std::endl;
            delete(m);
            delete(zeta);
            
            std::cout << std::endl;
        }
        catch(std::bad_alloc& e){
            std::cout << "Allocation failed: " << e.what() << std::endl;
        }
    }
    {
        try {        
            std::cout << "*--------------------------------------------------------------*\n";
            std::cout << "TEST: BRAIN CLASS, MEMBER FUNCTIONING\n";
            const Brain* check = new Brain();
            Brain test(*check);
            const Brain* setBrain = new Brain("Dog");
            Brain testset = *setBrain;

            std::cout << std::endl;
            std::cout << check->getAnIdea(-1); //should think generic animal thoughts
            std::cout << check->getAnIdea(199);
            std::cout << check->getAnIdea(20);
            std::cout << test.getAnIdea(-1); //should think generic animal thoughts 
            std::cout << test.getAnIdea(199);
            std::cout << test.getAnIdea(20);
            std::cout << setBrain->getAnIdea(-1); //should think dog thoughts
            std::cout << setBrain->getAnIdea(199);
            std::cout << setBrain->getAnIdea(20);
            std::cout << testset.getAnIdea(-1); //should think dog thoughts 
            std::cout << testset.getAnIdea(199);
            std::cout << testset.getAnIdea(20);
            std::cout << std::endl;
            
            delete(check);
            delete(setBrain);
            
            std::cout << std::endl;
        }
        catch(std::bad_alloc& e){
            std::cout << "Allocation failed: " << e.what() << std::endl;
        }
    }
    {
        try {    
            std::cout << "*--------------------------------------------------------------*\n";
            std::cout << "TEST: CAT AND DOG CLASS, MEMBER FUNCTIONING\n";
            const Cat* Tom = new Cat();
            Cat random(*Tom);
            const Dog* Scruffy = new Dog();
            Dog testDog = *Scruffy;
            
            std::cout << std::endl;
            std::cout << Tom->getAnIdea(-1);
            std::cout << Tom->getAnIdea(199);
            std::cout << Tom->getAnIdea(20);
            std::cout << random.getAnIdea(-1);
            std::cout << random.getAnIdea(199);
            std::cout << random.getAnIdea(20);
            std::cout << Scruffy->getAnIdea(-1);
            std::cout << Scruffy->getAnIdea(199);
            std::cout << Scruffy->getAnIdea(20);
            std::cout << testDog.getAnIdea(-1);
            std::cout << testDog.getAnIdea(199);
            std::cout << testDog.getAnIdea(20);
            std::cout << std::endl;
            
            delete(Tom);
            delete(Scruffy);
            
            std::cout << std::endl;
        }
        catch(std::bad_alloc& e){
            std::cout << "Allocation failed: " << e.what() << std::endl;
        }
    }
    {
        try {  
            std::cout << "*--------------------------------------------------------------*\n";
            std::cout << "TEST: ANIMAL ARRAY CREATION AND DESTRUCTION\n";
            Animal *array[10];
            for (int i = 0; i < 5; i++)
                array[i] = new Cat();
            for (int i = 5; i < 10; i++)
                array[i] = new Dog();
            
            std::cout << std::endl;
            array[0]->makeSound();
            array[2]->makeSound();
            array[5]->makeSound();
            array[9]->makeSound();
            array[0]->makeSound();
            std::cout << std::endl;
            
            for (int i = 0; i < 10; i++)
                delete array[i];
        }
        catch(std::bad_alloc& e){
            std::cout << "Allocation failed: " << e.what() << std::endl;
        }
    }
}
