/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:39:38 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/04 13:23:25 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype> // STANDARD LIBRARY?
#include <string>

void capitalize(std::string &str)
{
	if (str.empty())
		return;

	for (size_t i = 0; i < str.size(); i++)
		str[i] = toupper(str[i]);
}

int main(int argc, char* argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		std::string argument_str(argv[i]);
		capitalize(argument_str);
		std::cout << argument_str << " ";
	}
	std::cout << std::endl;
	return (0);
}
