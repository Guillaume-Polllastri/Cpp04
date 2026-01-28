/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:43:37 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/28 11:43:45 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(): _type("Unknown") {
    std::cout << "[WrongAnimal] Constructor called\n";
}

WrongAnimal::WrongAnimal(std::string type): _type(type){
    std::cout << "[WrongAnimal] Constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
    std::cout << "[WrongAnimal] Copy constructor called\n";
    *this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy) {
    std::cout << "[WrongAnimal] Copy assignment operator called\n";
    if (this != &copy)
        this->_type = copy._type;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "[WrongAnimal] Destructor called\n";
}

void    WrongAnimal::makeSound() const {
    std::cout << _type << ": Akikikikikikiii !\n";
}

std::string	WrongAnimal::getType() const {
	return (_type);
}
