/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:11:17 by mspasic           #+#    #+#             */
/*   Updated: 2025/04/24 21:29:33 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <stack>
#include <iostream>

int main()
{
    try{
        MutantStack<int> mstack;

        mstack.push(5); //first element
        mstack.push(17);

        std::cout << "Top: " << mstack.top() << std::endl; //last element in

        mstack.pop();

        std::cout << "Size: " << mstack.size() << std::endl;

        mstack.push(3);
        mstack.push(5);
        mstack.push(43);
        mstack.push(657);
        mstack.push(86);
        mstack.push(24);
        mstack.push(687);
        mstack.push(76);
        mstack.push(737);
        mstack.push(0); //last element

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        
        ++it;
        --it;
        std::cout << "Printing all values: \n";
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::cout << "--------------------\n";

        std::stack<int> s(mstack);
        std::cout << "S stack from mstack top element: " << s.top() << "\n";
        std::cout << "--------------------\n";

        //constructors/operator=
        MutantStack<int> test = mstack;
        MutantStack<int> best(test);


        //different type iterators
        MutantStack<int>::const_iterator c_it = mstack.cbegin();
        std::cout << "Const iterator: " << *c_it << std::endl;
        MutantStack<int>::reverse_iterator r_it = mstack.rbegin();
        std::cout << "Reverse iterator: " << *r_it << std::endl;
        MutantStack<int>::const_reverse_iterator cr_it = mstack.crbegin();
        std::cout << "Const reverse iterator: " << *cr_it << std::endl;
        std::cout << "--------------------\n";

        //at(), should be same values
        std::cout << "mstack.at ==> " << mstack.at(7) << "\n";
        std::cout << "best.at ==> " << best.at(7) << "\n";
        std::cout << "test.at ==> " << test.at(7) << "\n";
        std::cout << "--------------------\n";

        //[](), should be same values
        std::cout << "mstack[] ==> " << mstack[3] << "\n";
        std::cout << "best[] ==> " << best[3] << "\n";
        std::cout << "test[] ==> " << test[3] << "\n";
        std::cout << "--------------------\n";
        
        //front(), should be same values
        std::cout << "mstack.front ==> " << mstack.front() << "\n";
        std::cout << "best.front ==> " << best.front() << "\n";
        std::cout << "test.front ==> " << test.front() << "\n";
        std::cout << "--------------------\n";

        //back(), should be same values
        std::cout << "mstack.back ==> " << mstack.back() << "\n";
        std::cout << "best.back ==> " << best.back() << "\n";
        std::cout << "test.back ==> " << test.back() << "\n";
        std::cout << "--------------------\n";
    }
    catch(const std::exception& e){
        std::cout << "Error: " << e.what();
    }
}