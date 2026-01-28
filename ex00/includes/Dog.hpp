/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:48:40 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/28 10:54:25 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal {
public:
    Dog();
    Dog(const Dog& copy);
    Dog& operator=(const Dog& copy);
    ~Dog();

    void makeSound() const;
};