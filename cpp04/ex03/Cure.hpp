/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:14:25 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/19 13:04:03 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"


class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &copy);
		Cure(std::string const type);

		~Cure();

		Cure & operator=(const Cure &assign);

		Cure* clone() const;
		void use(ICharacter& target);

	protected:

		std::string _type;
};

#endif
