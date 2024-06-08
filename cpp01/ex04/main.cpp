/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 09:03:34 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/08 09:39:36 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include <fstream>

static int	check_file(std::string filename)
{
	std::ifstream file(filename);
	if (!file.is_open())
		return (1);
	file.close();
	return (0);
}

static int	replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream file(filename);

	std::ofstream outfile(filename + ".recplace");
	if (!outfile.is_open()) {
		std::cerr << "Error creating file: " << filename << ".replace" << std::endl;
		return (1);
	}

	std::string line;
	while (std::getline(file, line)) {
		outfile << line << std::endl;
	}
	(void)s1;
	(void)s2;
	file.close();
	outfile.close();
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "./mysed [filename] [string1] [string2]" << std::endl;
		return (1);
	}

	std::string filename(argv[1]);
	if (check_file(filename)) {
		std::cout << "Input file is incorrect" << std::endl;
		return (1);
	}
	
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	return replace(filename, s1, s2);
}
