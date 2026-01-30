/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:47:09 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/29 18:49:44 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include <iostream>

int	main(void)
{
	AMateria	materia("cure");

	std::cout << materia.getType() << std::endl;
	return (0);
}