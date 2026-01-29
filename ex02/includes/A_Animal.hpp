/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:05:02 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/29 10:59:12 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class A_Animal {
protected:
    std::string _type;

public:
    A_Animal();
    A_Animal(std::string type);
    A_Animal(const A_Animal& copy);
    A_Animal& operator=(const A_Animal& other);
    virtual ~A_Animal();

    virtual void 	makeSound() const = 0;
	std::string		getType() const;
};
