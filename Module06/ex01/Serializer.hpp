/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:54:34 by mspasic           #+#    #+#             */
/*   Updated: 2025/03/18 16:43:54 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <stdint.h>
# include "Data.hpp"

class Serializer{
    private:
        Serializer() = default;
        ~Serializer() = default;

        Serializer(const Serializer& obj) = delete;
        Serializer& operator=(const Serializer& other) = delete;
    public:
        static uintptr_t    serialize(Data* ptr);
        static Data*        deserialize(uintptr_t raw);
};