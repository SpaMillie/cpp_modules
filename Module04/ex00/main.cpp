/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:26 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/02 14:17:35 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void){
    try {
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
        const WrongAnimal *zeta = new WrongAnimal();
        const WrongAnimal *m = new WrongCat();
        zeta->makeSound();
        m->makeSound();
        delete(m);
        delete(zeta);
        return 0;
    }
    catch (std::bad_alloc& e){
        std::cout << "Allocation failed: " << e.what() << std::endl;
    }
}