/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:26 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/02 16:21:59 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void){
    try {
        std::cout << "BASIC TEST: ANIMAL, CAT, DOG TYPES\n";
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        delete(j);
        delete(i);
        delete(meta);
        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: BRAIN CLASS, MEMBER FUNCTIONING\n";
        const Brain* check = new Brain();
        Brain test(*check);
        const Brain* setBrain = new Brain("Dog");
        Brain testset = *setBrain;
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
        delete(check);
        delete(setBrain);
        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: CAT AND DOG CLASS, MEMBER FUNCTIONING\n";
        const Cat* Tom = new Cat();
        Cat random(*Tom);
        const Dog* Scruffy = new Dog();
        Dog testDog = *Scruffy;
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
        delete(Tom);
        delete(Scruffy);
        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: ANIMAL ARRAY CREATION AND DESTRUCTION\n";
        Animal *array[10];
        for (int i = 0; i < 5; i++)
            array[i] = new Cat();
        for (int i = 5; i < 10; i++)
            array[i] = new Dog();
        array[0]->makeSound();
        array[2]->makeSound();
        array[5]->makeSound();
        array[9]->makeSound();
        for (int i = 0; i < 10; i++)
            delete array[i];
        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: WRONGANIMAL CLASS IS STILL NOT FUNCTIONING AS ANIMAL\n";
        const WrongAnimal *zeta = new WrongAnimal();
        const WrongAnimal *m = new WrongCat();
        zeta->makeSound();
        m->makeSound();
        delete(m);
        delete(zeta);
    }
    catch(std::bad_alloc& e){
        std::cout << "Allocation failed: " << e.what() << std::endl;
    }
}