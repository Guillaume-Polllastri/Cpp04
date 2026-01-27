/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:58:50 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/27 13:43:16 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog(): Animal("Dog") {
    std::cout << "[Dog] Constructor called\n";
}

Dog::Dog(const Dog& copy): Animal(copy) {
    std::cout << "[Dog] Copy constructor called\n";
    *this = copy;
}

Dog&    Dog::operator=(const Dog& copy) {
    std::cout << "[Dog] Copy assignment operator called\n";
    if (this != &copy)
        Animal::operator=(copy);
    return *this;
}

Dog::~Dog() {
    std::cout << "[Dog] Destructor called\n";
}

void    Dog::makeSound() {
    std::cout << Animal::_type << ": WOOF WOOOOF !\n";
}
