/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 10:10:07 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/05 14:00:41 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Ice: public AMateria
{
	public:
	Ice();
	Ice(const Ice& copy);
	Ice& operator=(const Ice& other);
	~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};
