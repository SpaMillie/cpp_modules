/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:08:12 by mspasic           #+#    #+#             */
/*   Updated: 2025/03/18 21:43:16 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Base{
    private:

        Base(const Base& obj) = delete;
        Base operator=(const Base& other) = delete;
    public:
        Base() = default;
        virtual ~Base() = default;
        Base*   generate(void);
        void    identify(Base* p);
        void    identify(Base& p);
        void    touch_grass(void);
};