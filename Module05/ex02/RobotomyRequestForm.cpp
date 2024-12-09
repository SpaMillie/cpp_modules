/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:07:36 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/09 21:32:37 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45){
    std::cout << "Robotomy Request submitted and pending approval\n";
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "Robotomy Request destroyed\n";
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) {
    if (this->getState() == "true"){
        if (executor.getGrade() <= this->getGradeExec()){
            std::cout << "whirrwhirrrrrrrr\n";
            std::srand(time(0));
            bool lottery = (std::rand() % 2);
            if (lottery != 0)
                std::cout << executor.getName() << " has been successfully robotomised!\n";
            else
                std::cout << "Uh-oh, robotomy failed :(\n";
        }
        else{
            this->setMessage(1);
            throw (*this);
        }
    }
    else
        std::cout << "Could not execute " << this->getName() << " because it's not signed\n";
}
