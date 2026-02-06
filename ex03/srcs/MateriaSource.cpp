/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 17:29:05 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/06 18:34:13 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource& copy) {}

MateriaSource&  MateriaSource::operator=(const MateriaSource& other) {
    
}

MateriaSource::~MateriaSource() {}

void    MateriaSource::learnMateria(AMateria*) {
    
}

AMateria*   MateriaSource::createMateria(std::string const & type) {
    if (type.compare("ice"))
        return new Ice();
    if (type.compare("cure"))
        return new Cure();
    return nullptr;
}
