/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:47:09 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/08 21:23:26 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

#include <iostream>

int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp1;
	AMateria* tmp2;
	AMateria* tmp3;
	
	tmp1 = src->createMateria("ice");
	me->equip(tmp1);

	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	me->unequip(1);
	tmp3 = src->createMateria("ice");
	me->equip(tmp3);
	me->equip(tmp2);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	
	return 0;
}