/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:38:45 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/29 10:01:23 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
private:
	Brain*	_brain;

public:
    Cat();
    Cat(const Cat& copy);
    Cat& operator=(const Cat& other);
    ~Cat();

    void 		makeSound() const;
	void		setIdea(int index, std::string idea);
	std::string	getIdea(int index);
};