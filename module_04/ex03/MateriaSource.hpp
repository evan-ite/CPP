/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:58:25 by evan-ite          #+#    #+#             */
/*   Updated: 2024/06/25 10:11:29 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		// Constructors
		MateriaSource();
		MateriaSource(const MateriaSource &copy);

		// Destructor
		~MateriaSource();

		// Operators
		MateriaSource& operator=(const MateriaSource &assign);

		// Getters / Setters
		AMateria*	getStorage(int i) const;

		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);

	private:
		AMateria *_storage[4];

};

#endif
