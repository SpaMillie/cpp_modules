/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:31:37 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/03 19:58:58 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void){
    try {
        Bureaucrat obj("Shepard", 3);
        std::cout << obj << std::endl;
        Bureaucrat obj2("Legion", 23);
        std::cout << obj2 << std::endl;
        Bureaucrat obj3("Garrus", 90);
        std::cout << obj3 << std::endl;
        // Bureaucrat obj4("Liara", 0);
        // std::cout << obj4 << std::endl;
        // Bureaucrat obj5("Miranda", 160);
        // std::cout << obj5 << std::endl;
        Bureaucrat obj6("Grunt", 2147483647);
        std::cout << obj6 << std::endl;
    }
    catch (Bureaucrat& ge){
        std::cout << "Error: " << ge.what() << std::endl;
    }
}
