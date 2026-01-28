/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:42:19 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/28 11:44:57 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat(): WrongAnimal("WrongCat") {
    std::cout << "[WrongCat] Constructor called\n";
}

WrongCat::WrongCat(const WrongCat& copy): WrongAnimal(copy) {
    std::cout << "[WrongCat] Copy constructor called\n";
    *this = copy;
}

WrongCat&    WrongCat::operator=(const WrongCat& copy) {
    std::cout << "[WrongCat] Copy assignment operator called\n";
    if (this != &copy)
        WrongAnimal::operator=(copy);
    return (*this);
}

WrongCat::~WrongCat() {
    std::cout << "[WrongCat] Destructor called\n";
}

void    WrongCat::makeSound() const {
    std::cout << WrongAnimal::_type << ": Meow Meoooow !\n";
}
