/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 11:47:03 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/05 14:00:39 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "ICharacter.hpp"

class AMateria
{
	protected:
	std::string	_type;
	
	public:
	AMateria(std::string const& type);
	AMateria(const AMateria& copy);
	AMateria&	operator=(const AMateria& other);
	~AMateria();
	
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
