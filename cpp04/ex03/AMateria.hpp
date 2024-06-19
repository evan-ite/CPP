/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:14:25 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/19 20:49:28 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const type);

		virtual ~AMateria() = 0;

		AMateria & operator=(const AMateria &assign);

		std::string const &getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;

	protected:
		AMateria();
		AMateria(const AMateria &copy);

		std::string _type;
};

#endif
