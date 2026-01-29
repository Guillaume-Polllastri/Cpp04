/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:42:19 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/29 10:23:08 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat(): Animal("Cat") {
    std::cout << "[Cat] Constructor called\n";
	_brain = new Brain();
}

Cat::Cat(const Cat& copy): Animal(copy), _brain(new Brain(*copy._brain)) {
    std::cout << "[Cat] Copy constructor called\n";
}

Cat&    Cat::operator=(const Cat& other) {
    std::cout << "[Cat] Copy assignment operator called\n";
    if (this != &other)
	{
        Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
    return (*this);
}

Cat::~Cat() {
    std::cout << "[Cat] Destructor called\n";
	delete _brain;
}

void    Cat::makeSound() const {
    std::cout << Animal::_type << ": Meow Meoooow !\n";
}

void	Cat::setIdea(int index, std::string idea) {
	if (index >= 0 && index < 100)
		_brain->setIdea(index, idea);
}

std::string	Cat::getIdea(int index) {
	if (index >= 0 && index < 100)
		return (_brain->getIdea(index));
	return (NULL);
}