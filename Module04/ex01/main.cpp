/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:24:26 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/02 11:48:49 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void){
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
    //what happens when you call ideas and they are not set?
    //create and fill an array of Animal objects, half of it dog and half cat objs
    //at the end, loop over this array and delete every animal, directly cats as cats, dog as dogs, both as animals
    //check for memory leaks
    const WrongAnimal *zeta = new WrongAnimal();
    const WrongAnimal *m = new WrongCat();
    zeta->makeSound();
    m->makeSound();
    delete(m);
    delete(zeta);
    return 0;
}