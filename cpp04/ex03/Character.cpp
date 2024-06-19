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
	std::cout << "\e[0;33mDefault Constructor called of Character\e[0m" << std::endl;
}

Character::Character(const Character &copy)
{
	_name = copy.getName();
	for (int i = 0; i < 4; i++)
		delete _equipment[i];
	for (int i = 0; i < 4; i++)
		_equipment[i] = copy.getEquipment(i);
	std::cout << "\e[0;33mCopy Constructor called of Character\e[0m" << std::endl;
}

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		_equipment[i] = NULL;
	std::cout << "\e[0;33mFields Constructor called of Character\e[0m" << std::endl;
}


// Destructor
Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _equipment[i];
	std::cout << "\e[0;31mDestructor called of Character\e[0m" << std::endl;
}


// Operators
Character & Character::operator=(const Character &assign)
{
	_name = assign.getName();
	for (int i = 0; i < 4; i++)
		delete _equipment[i];
	for (int i = 0; i < 4; i++)
		_equipment[i] = assign.getEquipment(i);
	return *this;
}


// Getters / Setters
std::string const &Character::getName() const
{
	return _name;
}
AMateria *Character::getEquipment(int index) const
{
	return _equipment[index];
}

void Character::equip(AMateria* m) {
	static int i = 0;
	if (_equipment[i % 4] == NULL)
		_equipment[i % 4] = m;
	i++;
	std::cerr << "i = " << i;
}

void Character::unequip(int idx) {
	if (_equipment[idx] == NULL || idx > 3 || idx < 0)
		return ;
	_equipment[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	_equipment[idx]->use(target);
}
