/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 11:23:43 by msuokas           #+#    #+#             */
/*   Updated: 2025/08/29 11:57:57 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>\n";
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be an empty string.\n";
		return 1;
	}
	std::ifstream input_file(filename);
	if (!input_file.is_open())
	{
		std::cerr << "Error: Could not open input file.\n";
		return 1;
	}
	std::string output_filename = filename + ".replace";
	std::ofstream output_file(output_filename);
	if (!output_file.is_open())
	{
		input_file.close();
		std::cerr << "Error: Could not create output file.\n";
		return 1;
	}
	std::string line;
	while (std::getline(input_file, line))
	{
		std::string result;
		std::size_t pos = 0;
		std::size_t found;
		while ((found = line.find(s1, pos)) != std::string::npos)
		{
			result += line.substr(pos, found - pos);
			result += s2;
			pos = found + s1.length();
		}
		result += line.substr(pos);
		output_file << result << '\n';
	}
	input_file.close();
	output_file.close();
	return 0;
}
