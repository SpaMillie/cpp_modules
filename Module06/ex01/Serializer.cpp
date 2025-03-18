/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:07:39 by mspasic           #+#    #+#             */
/*   Updated: 2025/03/18 17:09:41 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"

uintptr_t    Serializer::serialize(Data* ptr){
    std::cout << "Converting a Data pointer to uintptr_t type!\n";
    return (reinterpret_cast <uintptr_t>(ptr));
}

Data*        Serializer::deserialize(uintptr_t raw){
    std::cout << "Converting uintptr_t type to a Data pointer!\n";
    return (reinterpret_cast<Data *>(raw));
}
