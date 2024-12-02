/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:36:03 by mspasic           #+#    #+#             */
/*   Updated: 2024/12/02 18:48:23 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(std::string type);
        Brain(const Brain& obj);
        Brain& operator=(const Brain& other);
        ~Brain();
        void setIdeas(std::string type);
        std::string getAnIdea(int index) const;
};

#endif
