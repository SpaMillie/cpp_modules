/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Streaming.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:12:24 by mspasic           #+#    #+#             */
/*   Updated: 2024/11/13 15:32:57 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAMING_HPP
# define STREAMING_HPP

# include <fstream>
# include <iostream>
# include <string>

class Streaming {
    private:
        std::string filename;
        std::string to_find;
        std::string replacement;
    public:
        void        set_element(char *str, int i);
        std::string get_element(int i);
        Streaming();
        ~Streaming();
};

#endif