/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 11:14:59 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/08 20:51:31 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include <iostream>

Cure::Cure(): AMateria("cure") {
}

Cure::Cure(const Cure& copy): AMateria(copy) {
}

Cure&	Cure::operator=(const Cure& other) {
	if (this != &other)
		AMateria::operator=(other);
	return *this;
}

Cure::~Cure() {
}

AMateria*	Cure::clone() const {
	return new Cure(*this);
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
