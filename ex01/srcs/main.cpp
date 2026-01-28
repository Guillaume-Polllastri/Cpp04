/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:58:18 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/28 18:57:34 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

#include <iostream>

int main( void )
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	
	// delete j;
	// delete i;
	int				nb = 2;
	Animal*	animals[nb];

	for (int i = 0; i < (nb / 2); i++)
		animals[i] = new Dog();
	for (int i = (nb / 2); i < nb; i++)
		animals[i] = new Cat();
	for (int i = 0; i < nb; i++)
		delete animals[i];
	return (0);
}
