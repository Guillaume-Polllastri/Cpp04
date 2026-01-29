/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:05:02 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/28 19:35:25 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Animal {
protected:
    std::string _type;

public:
    Animal();
    Animal(std::string type);
    Animal(const Animal& copy);
    Animal& operator=(const Animal& other);
    virtual ~Animal();

    virtual void 	makeSound() const;
	std::string		getType() const;
};
