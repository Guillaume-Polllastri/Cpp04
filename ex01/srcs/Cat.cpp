/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:42:19 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/28 18:37:06 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat(): Animal("Cat") {
    std::cout << "[Cat] Constructor called\n";
	_brain = new Brain();
}

Cat::Cat(const Cat& copy): Animal(copy) {
    std::cout << "[Cat] Copy constructor called\n";
}

Cat&    Cat::operator=(const Cat& copy) {
    std::cout << "[Cat] Copy assignment operator called\n";
    if (this != &copy)
        Animal::operator=(copy);
    return (*this);
}

Cat::~Cat() {
    std::cout << "[Cat] Destructor called\n";
	delete _brain;
}

void    Cat::makeSound() const {
    std::cout << Animal::_type << ": Meow Meoooow !\n";
}
