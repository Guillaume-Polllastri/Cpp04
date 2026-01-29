/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:58:18 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/29 10:25:05 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

#include <iostream>

int main( void )
{
	int		nb_animals = 2;
	Animal*	animals[nb_animals];
	Animal*	same_animals[nb_animals];

	for (int i = 0; i < nb_animals; i++)
	{
		if (i < (nb_animals / 2))
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		same_animals[i] = animals[i];
	}
	Cat* cat = static_cast<Cat*>(animals[1]);
	cat->setIdea(0, "toto");
	Cat*	copy_cat = new Cat(*cat);
	copy_cat->setIdea(0, "tata");
	std::cout << "cat: " << cat->getIdea(0) << std::endl;
	std::cout << "copy_cat: " << copy_cat->getIdea(0) << std::endl;
	for (int i = 0; i < nb_animals; i++)
	{
		delete same_animals[i];
	}
	delete copy_cat;
	return (0);
}
