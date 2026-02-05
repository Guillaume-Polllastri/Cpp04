/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 11:14:07 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/05 11:18:19 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include <string>

class Cure: public AMateria
{
	public:
	Cure();
	Cure(const Cure& copy);
	Cure& operator=(const Cure& other);
	~Cure();

	virtual AMateria* clone() const;
}