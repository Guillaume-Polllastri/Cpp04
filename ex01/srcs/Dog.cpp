/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:58:50 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/29 10:30:36 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog(): Animal("Dog") {
    std::cout << "[Dog] Constructor called\n";
	_brain = new Brain();
}

Dog::Dog(const Dog& copy): Animal(copy), _brain(new Brain(*copy._brain)) {
    std::cout << "[Dog] Copy constructor called\n";
}

Dog&    Dog::operator=(const Dog& other) {
    std::cout << "[Dog] Copy assignment operator called\n";
    if (this != &other)
	{
        Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
    return *this;
}

Dog::~Dog() {
    std::cout << "[Dog] Destructor called\n";
	delete _brain;
}

void    Dog::makeSound() const {
    std::cout << Animal::_type << ": WOOF WOOOOF !\n";
}
