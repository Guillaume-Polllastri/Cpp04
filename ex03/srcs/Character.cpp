/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:08:51 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/06 13:00:23 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include <iostream>

int Character::NB_CHARACTERS = 0;
Character::Floor*	Character::_FLOOR = nullptr;

Character::Character(std::string name): _name(name), _inventory() {
	NB_CHARACTERS++;
}

Character::Character(const Character& copy): _name(copy._name), _inventory() {
	NB_CHARACTERS++;
	for (int i = 0; i < nb_slots; i++)
	{
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i]->clone();
	}
}

Character& Character::operator=(const Character& other) {
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < nb_slots; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			_inventory[i] = NULL;
		}
		for (int i = 0; i < nb_slots; i++)
		{
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character() {
	NB_CHARACTERS--;
	for (int i = 0; i < nb_slots; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	if (NB_CHARACTERS <= 0)
		clearFloor();
}

AMateria*	Character::Floor::getMateria() const {
	return (this->materia);
}

Character::Floor*	Character::Floor::getNext() const {
	return (this->next);
}

void	Character::clearFloor(Floor* head) {
	if (head == nullptr)
		return ;
	Floor* tmp = head->getNext();
	delete head;
	clearFloor(tmp);
}

void	Character::addToFloor(AMateria* materia) {
	_FLOOR = new Floor(materia, _FLOOR);
}

Character::Floor*	Character::removeFromFloor(AMateria* materia, Floor* head) {
	if (head == nullptr)
		return head;
	if (materia == head->getMateria())
	{
		Floor*	tmp = head->getNext();
		delete head;
		return tmp;
	}
	head = head->getNext();
	removeFromFloor(materia, head);
	return head;
}

std::string const& Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < nb_slots; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << '[' << this->_name << "] " << m->getType() << " materia is equiped in the slot " << i << std::endl;
			return ;
		}
	}
	std::cout << '[' << this->_name << "] " << "Your inventory is full !" << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
	{
		std::cout << '[' << this->_name << "] " << "The slot index is wrong !" << std::endl;
		return ;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3)
	{
		std::cout << '[' << this->_name << "] " << "The slot index is wrong !" << std::endl;
		return ;
	}
	_inventory[idx]->use(target);
}
