/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:25:23 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/28 16:53:32 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap obj1;
    ScavTrap obj2("Jim");
    obj1.set_name("Spock");
    unsigned int amount;

    std::cout << "Let the PonFarr begin!\n";
    obj1.guardGate();
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    amount = rand() % 50;
    obj1.attack(obj2.get_name());
    obj2.takeDamage(amount);
    obj2.takeDamage(amount);
    obj2.takeDamage(amount);
    amount = rand() % 50;
    obj2.beRepaired(amount);
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    amount = rand() % 50;
    obj2.attack(obj1.get_name());
    obj1.takeDamage(amount);
    amount = rand() % 50;
    obj1.beRepaired(amount);
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    amount = rand() % 50;
    obj1.attack(obj2.get_name());
    obj2.takeDamage(amount);
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    amount = rand() % 50;
    obj2.attack(obj1.get_name());
    obj1.takeDamage(amount);
    amount = rand() % 50;
    obj1.beRepaired(amount);
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    amount = rand() % 50;
    obj2.attack(obj1.get_name());
    obj1.takeDamage(amount);
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    amount = rand() % 50;
    obj2.attack(obj1.get_name());
    obj1.takeDamage(amount);
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    amount = rand() % 50;
    obj1.attack(obj2.get_name());
    obj1.takeDamage(amount);
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    amount = rand() % 50;
    obj1.attack(obj2.get_name());
    obj1.takeDamage(amount);
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    amount = rand() % 50;
    obj1.attack(obj2.get_name());
    obj1.takeDamage(amount);
    std::cout << "Current state is:\nName: " << obj1.get_name() << "\nHP: " << obj1.get_int(1) << "\nEP: " << obj1.get_int(2) << "\nAD: " << obj1.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj2.get_name() << "\nHP: " << obj2.get_int(1) << "\nEP: " << obj2.get_int(2) << "\nAD: " << obj2.get_int(3) << std::endl;
    
    ScavTrap obj3;
    ScavTrap obj4("Jim");
    obj3.set_name("Spock");

    std::cout << "Let the PonFarr begin!\n";
    std::cout << "Current state is:\nName: " << obj3.get_name() << "\nHP: " << obj3.get_int(1) << "\nEP: " << obj3.get_int(2) << "\nAD: " << obj3.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj4.get_name() << "\nHP: " << obj4.get_int(1) << "\nEP: " << obj4.get_int(2) << "\nAD: " << obj4.get_int(3) << std::endl;
    obj3.attacks_the_other(obj4);
    amount = rand() % 50;
    obj4.beRepaired(amount);
    std::cout << "Current state is:\nName: " << obj3.get_name() << "\nHP: " << obj3.get_int(1) << "\nEP: " << obj3.get_int(2) << "\nAD: " << obj3.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj4.get_name() << "\nHP: " << obj4.get_int(1) << "\nEP: " << obj4.get_int(2) << "\nAD: " << obj4.get_int(3) << std::endl;
    obj4.attacks_the_other(obj3);
    amount = rand() % 50;
    obj3.beRepaired(amount);
    std::cout << "Current state is:\nName: " << obj3.get_name() << "\nHP: " << obj3.get_int(1) << "\nEP: " << obj3.get_int(2) << "\nAD: " << obj3.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj4.get_name() << "\nHP: " << obj4.get_int(1) << "\nEP: " << obj4.get_int(2) << "\nAD: " << obj4.get_int(3) << std::endl;
    obj3.attacks_the_other(obj4);
    std::cout << "Current state is:\nName: " << obj3.get_name() << "\nHP: " << obj3.get_int(1) << "\nEP: " << obj3.get_int(2) << "\nAD: " << obj3.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj4.get_name() << "\nHP: " << obj4.get_int(1) << "\nEP: " << obj4.get_int(2) << "\nAD: " << obj4.get_int(3) << std::endl;
    obj4.attacks_the_other(obj3);
    amount = rand() % 50;
    obj3.beRepaired(amount);
    std::cout << "Current state is:\nName: " << obj3.get_name() << "\nHP: " << obj3.get_int(1) << "\nEP: " << obj3.get_int(2) << "\nAD: " << obj3.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj4.get_name() << "\nHP: " << obj4.get_int(1) << "\nEP: " << obj4.get_int(2) << "\nAD: " << obj4.get_int(3) << std::endl;
    obj4.attacks_the_other(obj3);
    std::cout << "Current state is:\nName: " << obj3.get_name() << "\nHP: " << obj3.get_int(1) << "\nEP: " << obj3.get_int(2) << "\nAD: " << obj3.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj4.get_name() << "\nHP: " << obj4.get_int(1) << "\nEP: " << obj4.get_int(2) << "\nAD: " << obj4.get_int(3) << std::endl;
    obj4.attacks_the_other(obj3);
    std::cout << "Current state is:\nName: " << obj3.get_name() << "\nHP: " << obj3.get_int(1) << "\nEP: " << obj3.get_int(2) << "\nAD: " << obj3.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj4.get_name() << "\nHP: " << obj4.get_int(1) << "\nEP: " << obj4.get_int(2) << "\nAD: " << obj4.get_int(3) << std::endl;
    obj4.attacks_the_other(obj3);
    std::cout << "Current state is:\nName: " << obj3.get_name() << "\nHP: " << obj3.get_int(1) << "\nEP: " << obj3.get_int(2) << "\nAD: " << obj3.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj4.get_name() << "\nHP: " << obj4.get_int(1) << "\nEP: " << obj4.get_int(2) << "\nAD: " << obj4.get_int(3) << std::endl;
    obj4.attacks_the_other(obj3);
    std::cout << "Current state is:\nName: " << obj3.get_name() << "\nHP: " << obj3.get_int(1) << "\nEP: " << obj3.get_int(2) << "\nAD: " << obj3.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj4.get_name() << "\nHP: " << obj4.get_int(1) << "\nEP: " << obj4.get_int(2) << "\nAD: " << obj4.get_int(3) << std::endl;
    obj3.attacks_the_other(obj4);
    std::cout << "Current state is:\nName: " << obj3.get_name() << "\nHP: " << obj3.get_int(1) << "\nEP: " << obj3.get_int(2) << "\nAD: " << obj3.get_int(3) << std::endl;
    std::cout << "Current state is:\nName: " << obj4.get_name() << "\nHP: " << obj4.get_int(1) << "\nEP: " << obj4.get_int(2) << "\nAD: " << obj4.get_int(3) << std::endl;
}
