/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:24:01 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/01 13:42:48 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

bool checkArgs(std::ifstream& filein, std::ofstream& fileout, std::string& s1)
{
	if (!filein.is_open())
	{
		std::cout << "Error while opening input file." << "\n";
		return false;
	}
	if (!fileout.is_open())
	{
		filein.close();
		std::cout << "Error while opening output file." << "\n";
		return false;
	}
	if (s1.empty())
	{
		filein.close();
		fileout.close();
		std::cout << "String to replace cannot be empty." << "\n";
		return false;
	}
	return true;
}

bool isLastNewline(std::ifstream& filein)
{
	filein.clear();
	filein.seekg(0, std::ios::beg);

	std::ostringstream stream;
	stream << filein.rdbuf();

	std::string filein_str = stream.str();
	if (filein_str.empty())
		return false;
	return filein_str[filein_str.length() - 1] == '\n';
}

void heppy(std::ifstream& filein, std::ofstream& fileout, std::string& s1, std::string& s2)
{
	std::string line;
	size_t pos;
	size_t line_len;
	size_t s1_len = s1.length();

	std::getline(filein, line);
	while (true)
	{
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line_len = line.length();
			line = line.substr(0, pos) + s2 + line.substr(pos + s1_len, line_len - (pos + s1_len));
			pos = line.find(s1);
		}
		fileout << line;
		if (!std::getline(filein, line))
			break;
		fileout << "\n";
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong arguments! Usage: ./no_sed_only_heppy <filename> s1 s2" << "\n";
		return 1;
	}

	std::string name = argv[1];
	std::ifstream filein(name.c_str());
	std::string replaced = name + ".replace";
	std::ofstream fileout(replaced.c_str());
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (!checkArgs(filein, fileout, s1))
		return 1;

	heppy(filein, fileout, s1, s2);
	if (isLastNewline(filein))
		fileout << "\n";

	filein.close();
	fileout.close();
	return 0;
}
