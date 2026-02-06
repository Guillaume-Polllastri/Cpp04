/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 11:48:32 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/06 18:54:40 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include <iostream>

AMateria::AMateria(std::string const& type): _type(type) {
    std::cout << "[AMateria] Constructor called\n";
}

AMateria::AMateria(const AMateria& copy) {
    std::cout << "[AMateria] Copy constructor called\n";
	*this = copy;
}

AMateria&	AMateria::operator=(const AMateria& other) {
    std::cout << "[AMateria] Copy assignment operator called\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

AMateria::~AMateria() {
    std::cout << "[AMateria] Destructor called\n";
}

std::string const& AMateria::getType() const {
	return this->_type;
}

void	AMateria::use(ICharacter& target) {
	(void) target;
}
