/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:48:28 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/19 12:48:29 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Constructors
Character::Character()
{
	_name = "no name";
	for (int i = 0; i < 4; i++)
		_equipment[i] = NULL;
	std::cout << "\033[0;33mDefault Constructor called of Character\033[0m" << std::endl;
}


Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		_equipment[i] = NULL;
	std::cout << "\033[0;33mFields Constructor called of Character\033[0m" << std::endl;
}

Character::Character(const Character &copy)
{
	_name = copy.getName();
	for (int i = 0; i < 4; i++)
		delete _equipment[i];
	for (int i = 0; i < 4; i++)
		_equipment[i] = copy.getEquipment(i);
	std::cout << "\033[0;33mCopy Constructor called of Character\033[0m" << std::endl;
}


// Destructor
Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _equipment[i];
	std::cout << "\033[0;31mDestructor called of Character\033[0m" << std::endl;
}


// Operators
Character & Character::operator=(const Character &assign)
{
	if (this != &assign) {
		_name = assign.getName();
		for (int i = 0; i < 4; i++)
			delete _equipment[i];
		for (int i = 0; i < 4; i++)
			_equipment[i] = assign.getEquipment(i);
	}
	return *this;
}


// Getters / Setters
std::string const &Character::getName() const {
	return _name;
}

AMateria *Character::getEquipment(int index) const {
	return _equipment[index];
}

void Character::equip(AMateria* m) {
	static int i = 0;
	if (_equipment[i % 4] == NULL)
		_equipment[i % 4] = m;
	else
		std::cout << "Storage is full..." << std::endl;
	i++;
}

void Character::unequip(int idx) {
	if (idx > 3 || idx < 0 || _equipment[idx] == NULL)
		return ;
	_equipment[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (_equipment[idx % 4] == NULL)
		return;
	_equipment[idx % 4]->use(target);
}
