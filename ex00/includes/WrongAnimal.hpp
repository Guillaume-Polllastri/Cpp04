/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:05:02 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/28 11:43:48 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class WrongAnimal {
protected:
    std::string _type;

public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal& copy);
    WrongAnimal& operator=(const WrongAnimal& copy);
    ~WrongAnimal();

    void 	makeSound() const;
	std::string		getType() const;
};
