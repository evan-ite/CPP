/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:11:26 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/06 15:19:45 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static int	check_input(PhoneBook &book, std::string input)
{
	if (input == "ADD") {
		book.add();
	}
	else if (input == "SEARCH") {
		std::string	index;
		book.print_contacts();
		std::cout << "\nWhich index would you like to display: ";
		std::getline(std::cin, index);
		book.search(index);
	}
	else if (input == "EXIT") {
		return (0);
	}
	else {
		std::cout << "Invalid input. Try again.\n";
	}
	return (1);
}

int	main()
{
	PhoneBook book;
	std::string input;

	std::cout << "\n----- Welcome to the PhoneBook! -----" << std::endl;
	std::cout << "\nADD : Add new contact to PhoneBook\n";
	std::cout << "SEARCH : Search through PhoneBook\n";
	std::cout << "EXIT : Exit the Phonebook\n";

	do {
		std::cout << "\nWhat do you want to do: ";
		std::getline(std::cin, input);
	} while (check_input(book, input));

	return (0);
}
