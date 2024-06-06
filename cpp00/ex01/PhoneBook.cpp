/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:25:48 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/06 15:25:51 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

PhoneBook::PhoneBook() {}


// Function to add a contact
void PhoneBook::add() {
	static int	i = 0;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone;
	std::string	secret;

	std::cout << "\nFirst name: ";
	std::getline(std::cin, first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, phone);
	std::cout << "What's the secret: ";
	std::getline(std::cin, secret);

	Contact new_contact(first_name, last_name, nickname, phone, secret);
	_contacts[i % 8] = new_contact;
	i++;
}

// Function to search for a contact
void PhoneBook::print_contacts() const
{
	std::cout << "---------------------------------------------\n";
	std::cout << "|Index     |Firstname |Lastname  |Nickname  |\n";
	std::cout << "---------------------------------------------\n";
	for (int i = 0; i < 8; i++) {
		if (_contacts[i].exist())
			_contacts[i].view(i);
	}
	std::cout << "---------------------------------------------\n";
}

// Function to search for a contact by index
void PhoneBook::search(std::string index) const
{
	int	i = std::atoi(index.c_str());
	if (i - 1 < 0 || i - 1 > 7 || !_contacts[i - 1].exist()) {
		std::cout << "Please enter a valid index" << std::endl;
		return ;
	}
	std::cout << "---------------------------------------------\n";
	std::cout << "|Index     |Firstname |Lastname  |Nickname  |\n";
	std::cout << "---------------------------------------------\n";
	_contacts[i - 1].view(i - 1);
	std::cout << "---------------------------------------------\n";

}

PhoneBook::~PhoneBook() {}
