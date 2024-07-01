/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:44 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/24 13:33:01 by evan-ite         ###   ########.fr       */
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
		Animal(const std::string type);
		Animal(const Animal &copy);

		// Destructor
		virtual ~Animal();

		// Operators
		Animal & operator=(const Animal &assign);

		// Getters / Setters
		std::string getType() const;

		// Member functions
		virtual void makeSound(void) const;

	private:
		std::string _type;

};

#endif
