/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:48:23 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/19 20:48:23 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		// Constructors
		Character();
		Character(const Character &copy);
		Character(std::string name);

		// Destructor
		~Character();

		// Operators
		Character & operator=(const Character &assign);

		// Getters / Setters
		std::string const &getName() const;
		AMateria *getEquipment(int index) const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string _name;
		AMateria *_equipment[4];

};

#endif
