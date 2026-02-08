/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 11:48:32 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/08 23:51:51 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include <iostream>

AMateria::AMateria(std::string const& type): _type(type) {
    // std::cout << "[AMateria] Constructor called\n";
}

AMateria::AMateria(const AMateria& copy): _type(copy._type) {
    // std::cout << "[AMateria] Copy constructor called\n";
}

AMateria&	AMateria::operator=(const AMateria& other) {
    // std::cout << "[AMateria] Copy assignment operator called\n";
	(void) other;
	return (*this);
}

AMateria::~AMateria() {
    // std::cout << "[AMateria] Destructor called\n";
}

std::string const& AMateria::getType() const {
	return this->_type;
}

void	AMateria::use(ICharacter& target) {
	(void) target;
}
