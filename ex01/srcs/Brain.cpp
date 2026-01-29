/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:44:57 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/28 19:57:55 by gpollast         ###   ########.fr       */
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

void	Brain::setIdea(int index, std::string idea) {
	if (index >= 0 && index < 100)
		_ideas[index] = idea;
}

std::string	Brain::getIdea(int index) {
	if (index >= 0 && index < 100)
		return (_ideas[index]);
	return (NULL);
}
