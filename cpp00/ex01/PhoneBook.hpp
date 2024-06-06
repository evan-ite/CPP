/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:25:39 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/06 15:25:42 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
#include "Contact.hpp"

class PhoneBook
{
	public:
		// Constructor
		PhoneBook();
		// Destructor
		~PhoneBook();

		void add();
		void print_contacts() const;
		void search(std::string index) const;
	private:
		Contact _contacts[8];

};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const PhoneBook &object);

#endif
