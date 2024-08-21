/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:03:11 by elisevanite       #+#    #+#             */
/*   Updated: 2024/08/21 16:43:38 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap(std::string name) {
	_name = name;
	_hitPoints = 10;
	_energy = 10;
	_damage = 0;
	std::cout << "\033[0;33mFields Constructor called of ClapTrap\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	_name = copy.getName();
	_hitPoints = copy.getHitPoints();
	_energy = copy.getEnergy();
	_damage = copy.getDamage();
	std::cout << "\033[0;33mCopy Constructor called of ClapTrap\033[0m" << std::endl;
}


// Destructor
ClapTrap::~ClapTrap() {
	std::cout << "\033[0;31mDestructor called of ClapTrap\033[0m" << std::endl;
}


// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign) {
	_name = assign.getName();
	_hitPoints = assign.getHitPoints();
	_energy = assign.getEnergy();
	_damage = assign.getDamage();
	return *this;
}


// Getters / Setters
std::string ClapTrap::getName() const {
	return _name;
}
int ClapTrap::getHitPoints() const {
	return _hitPoints;
}
int ClapTrap::getEnergy() const {
	return _energy;
}
int ClapTrap::getDamage() const {
	return _damage;
}
void ClapTrap::setHitPoints(int newPoints) {
	_hitPoints = newPoints;
}


// Member functions
void ClapTrap::attack(const std::string& target){
	if (!_energy || !_hitPoints) {
		std::cout << "ClapTrap " << _name << " doesn't have any energy/hitpoints left..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
	<< _damage << " points of damage!" << std::endl;
	_energy--;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoints <= (int)amount) {
		std::cout << "Claptrap " << _name << " is dead... :(" << std::endl;
		_hitPoints = 0;
		return ;
	}
	_hitPoints -= amount;
	std::cout << "Claptrap " << _name << " lost " << amount << " hitpoints" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energy <= 0|| !_hitPoints) {
		std::cout << "ClapTrap " << _name << " doesn't have any energy/hitpoints left..." << std::endl;
		return ;
	}
	_hitPoints += amount;
	_energy--;
	std::cout << "Claptrap " << _name << " repaired " << amount << " hitpoints" << std::endl;
}

// Stream operators
std::ostream & operator<<(std::ostream &stream, const ClapTrap &object)
{
	stream << "" << object.getName() << " has " << object.getHitPoints()
	<< " hit points, " << object.getEnergy() << " energy points and "
	<< object.getDamage() << " damage points" << std::endl;
	return stream;
}
