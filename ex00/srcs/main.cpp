/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:58:18 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/27 14:52:06 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
    Animal*  toto = new Dog();
    // Animal  tata;
    
    toto->makeSound();
    // tata.makeSound();
    delete toto;
    return (0);
}