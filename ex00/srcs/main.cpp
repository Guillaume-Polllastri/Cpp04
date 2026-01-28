/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:58:18 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/28 11:53:37 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

#include <iostream>

int main( void )
{
	std::cout << "\nDog and Cat class that inherits from a Animal class with virtual method\n\n";

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "\nWrongCat class that inherits from a WrongAnimal class without virtual method\n\n";

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();

	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	meta2->makeSound();

	delete meta2;
	delete k;
	return 0;
}
