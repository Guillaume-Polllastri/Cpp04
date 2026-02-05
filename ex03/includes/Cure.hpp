/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 11:14:07 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/05 14:00:24 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Cure: public AMateria
{
	public:
	Cure();
	Cure(const Cure& copy);
	Cure& operator=(const Cure& other);
	~Cure();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};