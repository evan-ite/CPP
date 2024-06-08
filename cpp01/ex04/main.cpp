/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 09:03:34 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/08 13:51:26 by elisevanite      ###   ########.fr       */
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

static std::string	replace(std::string line, std::string s1, std::string s2)
{
	std::string new_str;
	size_t i_target = 0;
	while ((i_target = line.find(s1, 0)) != std::string::npos) {
		new_str.append(line.substr(0, i_target));
		new_str.append(s2);
		i_target += s1.length();
		line = line.substr(i_target);
	}
	new_str.append(line);
	return new_str;
}

static int	run(std::string filename, std::string s1, std::string s2)
{
	std::ifstream file(filename);

	std::ofstream outfile(filename + ".recplace");
	if (!outfile.is_open()) {
		std::cerr << "Error creating file: " << filename << ".replace" << std::endl;
		return (1);
	}

	std::string line;
	while (std::getline(file, line))
		outfile << replace(line, s1, s2) << std::endl;

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
	return run(filename, s1, s2);
}
