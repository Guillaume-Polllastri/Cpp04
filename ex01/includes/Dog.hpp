/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:48:40 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/28 19:35:07 by gpollast         ###   ########.fr       */
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
    Dog& operator=(const Dog& other);
    ~Dog();

    void makeSound() const;
};