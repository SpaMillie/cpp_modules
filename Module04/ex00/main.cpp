/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:26 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/02 17:33:04 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void){
    try {
        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: ANIMAL, CAT, DOG CLASSES, MEMBER FUNCTIONING\n";
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << std::endl;
        std::cout << j->getType() << ": ";
        i->makeSound(); //will output the cat sound
        std::cout << i->getType() << ": ";
        j->makeSound(); //will output the dog sound
        std::cout << meta->getType() << ": ";
        meta->makeSound(); //will output the generic animal sound
        std::cout << std::endl;
        delete(j);
        delete(i);
        delete(meta);

        std::cout << std::endl;
        std::cout << "*--------------------------------------------------------------*\n";
        std::cout << "TEST: WRONGANIMAL, WRONGCAT CLASSES, MEMBER FUNCTIONING\n";
        const WrongAnimal *zeta = new WrongAnimal();
        const WrongAnimal *m = new WrongCat();
        WrongCat test;

        std::cout << std::endl;
        std::cout << zeta->getType() << ": ";
        zeta->makeSound(); //will output the generic wronganimal sound
        std::cout << m->getType() << ": ";
        m->makeSound(); //will output the generic wronganimal sound 
        std::cout << test.getType() << ": ";
        test.makeSound(); //will output the wrongcat sound
        std::cout << std::endl;
        delete(m);
        delete(zeta);
        return 0;
    }
    catch (std::bad_alloc& e){
        std::cout << "Allocation failed: " << e.what() << std::endl;
    }
}