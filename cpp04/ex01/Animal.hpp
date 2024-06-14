/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:44 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/14 12:00:47 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		// Constructors
		Animal();
		Animal(const Animal &copy);
		Animal(std::string type);

		// Destructor
		virtual ~Animal();

		// Operators
		Animal & operator=(const Animal &assign);

		// Getters / Setters
		std::string getType() const;

		// Member functions
		virtual void makeSound(void) const;
		virtual std::string getIdea(int i) const;
		virtual void setIdea(int i, std::string idea);
		void setType(std::string type);


	private:
		std::string _type;

};

#endif
