/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 13:59:40 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/05 20:45:27 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

#include <string>

static const int nb_slots = 4;

class Character: public ICharacter
{
	private:
	std::string	_name;
	AMateria*	_inventory[nb_slots];
	class Floor 
	{
		AMateria*	materia;
		Floor*		next;

		public:
		Floor(AMateria* m, Floor* n): materia(m), next(n) {}
	};
	static Floor* _FLOOR;
	static int		NB_CHARACTERS;

	static void		clearFloor();
	void			addToFloor(AMateria* materia);
	void			removeFromFloor(AMateria* materia);
	
	public:
	Character(std::string name);
	Character(const Character& copy);
	Character& operator=(const Character& other);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};