/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 17:29:05 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/08 23:53:48 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include <iostream>

MateriaSource::MateriaSource(): slots(), nb_materia(0) {}

MateriaSource::MateriaSource(const MateriaSource& copy): nb_materia(copy.nb_materia) {
	for (int i = 0; i < copy.nb_materia; i++)
	{
		if (copy.slots[i])
			slots[i] = copy.slots[i]->clone();
	}
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& other) {
    if (this != &other)
	{
		nb_materia = other.nb_materia;
		for (int i = 0; i < nb_materia; i++)
		{
			if (slots[i])
				delete slots[i];
			slots[i] = NULL;
		}
		for (int i = 0; i < other.nb_materia; i++)
		{
			if (other.slots[i])
				slots[i] = other.slots[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < nb_slot; i++)
	{
		if (slots[i])
			delete slots[i];
	}
}

void    MateriaSource::learnMateria(AMateria* materia) {
	if (nb_materia == nb_slot)
	{
		std::cout << "You have learn enough materia !\n";
		return ;
	}
	slots[nb_materia] = materia;
	nb_materia++;
}

AMateria*   MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < nb_materia; i++)
	{
		if (slots[i] && slots[i]->getType() == type)
			return (slots[i]->clone());
	}
    return NULL;
}
