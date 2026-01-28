/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:44:57 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/28 18:29:39 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>

Brain::Brain() {
    std::cout << "[Brain] Constructor called\n";
}

Brain::Brain(const Brain& copy) {
    std::cout << "[Brain] Copy constructor called\n";
	*this = copy;
}

Brain&	Brain::operator=(const Brain& other) {
    std::cout << "[Brain] Copy assignment called\n";
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	return *this;
}

Brain::~Brain() {
    std::cout << "[Brain] Destructor called\n";
}
