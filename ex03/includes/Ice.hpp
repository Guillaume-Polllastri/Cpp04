/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 10:10:07 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/05 11:14:46 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include <string>

class Ice: public AMateria
{
	public:
	Ice();
	Ice(const Ice& copy);
	Ice& operator=(const Ice& other);
	~Ice();

	virtual AMateria* clone() const;
}