/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:25:23 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/25 19:21:44 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap obj1;
    ClapTrap obj2("Jim");
    obj1.set_name("Spock");
    unsigned int amount;
    
    std::cout << "Let the PonFarr begin!\n";
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    obj1.attacks_the_other(obj2);
    // obj1.attack(obj2.get_name());
    // obj2.takeDamage(1);
    // obj2.takeDamage(1);
    // obj2.takeDamage(1);
    amount = rand() % 10;
    obj2.beRepaired(amount);
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    obj2.attacks_the_other(obj1);
    // obj2.attack(obj1.get_name());
    // obj1.takeDamage(5);
    amount = rand() % 10;
    obj1.beRepaired(amount);
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    obj1.attacks_the_other(obj2);
    // obj1.attack(obj2.get_name());
    // obj2.takeDamage(0);
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    obj2.attacks_the_other(obj1);
    // obj2.attack(obj1.get_name());
    // obj1.takeDamage(5);
    amount = rand() % 10;
    obj1.beRepaired(amount);
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    obj2.attacks_the_other(obj1);
    // obj2.attack(obj1.get_name());
    // obj1.takeDamage(5);
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    obj2.attacks_the_other(obj1);
    // obj2.attack(obj1.get_name());
    // obj1.takeDamage(7);
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    obj2.attacks_the_other(obj1);
    // obj1.attack(obj2.get_name());
    // obj1.takeDamage(7);
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    obj2.attacks_the_other(obj1);
    // obj1.attack(obj2.get_name());
    // obj1.takeDamage(7);
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    obj1.attacks_the_other(obj2);
    // obj1.attack(obj2.get_name());
    // obj1.takeDamage(7);
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
}
