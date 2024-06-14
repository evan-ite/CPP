/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:44 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/14 12:14:40 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		// Destructor
		virtual ~Animal() = 0;

		// Operators
		Animal & operator=(const Animal &assign);

		// Getters / Setters
		std::string getType() const;
		void setType(std::string type);

		// Member functions
		virtual void makeSound(void) const = 0;
		virtual std::string getIdea(int i) const = 0;
		virtual void setIdea(int i, std::string idea) = 0;


	protected:
		// Constructors
		Animal();
		Animal(const Animal &copy);
		Animal(std::string type);

		std::string _type;

};

#endif
