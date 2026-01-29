/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:17:34 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/29 10:59:26 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"
#include <iostream>

A_Animal::A_Animal(): _type("Unknown") {
    std::cout << "[A_Animal] Constructor called\n";
}

A_Animal::A_Animal(std::string type): _type(type){
    std::cout << "[A_Animal] Constructor called\n";
}

A_Animal::A_Animal(const A_Animal& copy) {
    std::cout << "[A_Animal] Copy constructor called\n";
    *this = copy;
}

A_Animal& A_Animal::operator=(const A_Animal& other) {
    std::cout << "[A_Animal] Copy assignment operator called\n";
    if (this != &other)
        this->_type = other._type;
    return *this;
}

A_Animal::~A_Animal() {
    std::cout << "[A_Animal] Destructor called\n";
}

std::string	A_Animal::getType() const {
	return (_type);
}
