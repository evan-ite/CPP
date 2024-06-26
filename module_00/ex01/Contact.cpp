/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:26:11 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/20 11:40:37 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

Contact::Contact()
{
	_first_name = "NULL";
	_last_name = "NULL";
	_nickname = "NULL";
	_phone = "NULL";
	_secret = "NULL";
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone, std::string secret)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_phone = phone;
	_secret = secret;
}

void Contact::view(int index) const
{
	const int	len = 10;
	std::string print_vars[3] = {_first_name, _last_name, _nickname};

	std::cout << "|" << std::setw(len) << std::left << index + 1;
	for (int i = 0; i < 3; i++) {
		std::string str = print_vars[i];
		std::cout << "|" << std::setw(len) << std::left << str.substr(0, len) << std::right;
	}
	std::cout << "|" << std::endl;
}

int Contact::exist() const
{
	if (_first_name == "NULL")
		return (0);
	return (1);
}

Contact::~Contact() {}
