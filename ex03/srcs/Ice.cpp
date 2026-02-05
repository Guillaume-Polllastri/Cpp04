/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 10:12:12 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/05 11:13:08 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
}

Ice::Ice(const Ice& copy): AMateria(copy) {
}

Ice&	Ice::operator=(const Ice& other) {
	if (this != &other)
		AMateria::operator=(other);
	return *this;
}

Ice::~Ice() {
}

AMateria* Ice::clone() const {
	return new Ice(*this);
}
