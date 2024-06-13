/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:31 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/13 15:26:01 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		// Constructors & Destructor
		Cat();
		Cat(const Cat &copy);
		~Cat();

		// Member functions
		void makeSound(void) const;
		std::string getIdea(int i) const;
		void setIdea(int i, std::string idea);
		Brain *getBrain(void) const;

	private:
		Brain *_brain;
};

#endif
