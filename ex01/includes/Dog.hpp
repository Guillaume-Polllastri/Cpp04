/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:48:40 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/28 18:30:59 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
private:
	Brain*	_brain;

public:
    Dog();
    Dog(const Dog& copy);
    Dog& operator=(const Dog& copy);
    ~Dog();

    void makeSound() const;
};