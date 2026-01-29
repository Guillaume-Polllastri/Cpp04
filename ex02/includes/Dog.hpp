/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:48:40 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/29 10:45:44 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog: public A_Animal {
private:
	Brain*	_brain;

public:
    Dog();
    Dog(const Dog& copy);
    Dog& operator=(const Dog& other);
    ~Dog();

    void makeSound() const;
};