/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:07:39 by mspasic           #+#    #+#             */
/*   Updated: 2025/03/18 15:29:25 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"
#include "Data.hpp"
#include <stdint.h>

uintptr_t    Serializer::serialize(Data* ptr){
    return (*(reinterpret_cast <uintptr_t *>(ptr)));
}

Data*        Serializer::deserialize(uintptr_t raw){
    return(reinterpret_cast<Data *>(raw));
}
