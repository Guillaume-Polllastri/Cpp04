/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:17:34 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/28 19:57:44 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(): _type("Unknown") {
    std::cout << "[Animal] Constructor called\n";
}

Animal::Animal(std::string type): _type(type){
    std::cout << "[Animal] Constructor called\n";
}

Animal::Animal(const Animal& copy) {
    std::cout << "[Animal] Copy constructor called\n";
    *this = copy;
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << "[Animal] Copy assignment operator called\n";
    if (this != &other)
        this->_type = other._type;
    return *this;
}

Animal::~Animal() {
    std::cout << "[Animal] Destructor called\n";
}

void    Animal::makeSound() const {
    std::cout << _type << ": Akikikikikikiii !\n";
}

std::string	Animal::getType() const {
	return (_type);
}
