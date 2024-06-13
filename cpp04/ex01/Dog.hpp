/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:31 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/13 15:27:28 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		// Constructors & Destructor
		Dog();
		Dog(const Dog &copy);
		~Dog();

		// Member functions
		void makeSound(void) const;
		std::string getIdea(int i) const;
		void setIdea(int i, std::string idea);
		Brain *getBrain(void) const;

	private:
		Brain *_brain;
};

#endif
