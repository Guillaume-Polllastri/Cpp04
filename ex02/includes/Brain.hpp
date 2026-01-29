/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:35:43 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/29 10:01:09 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Brain {
private:
	std::string	_ideas[100];

public:
	Brain();
	Brain(const Brain& copy);
	Brain&	operator=(const Brain& other);
	~Brain();
	
	void		setIdea(int index, std::string idea);
	std::string	getIdea(int index);
};
