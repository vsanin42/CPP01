/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:24:01 by vsanin            #+#    #+#             */
/*   Updated: 2025/03/28 23:29:27 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
		return std::cout << "Wrong arguments! Usage: ./antised <filename> s1 s2" << "\n", 1;

	std::string name = argv[1];
	std::ifstream filein(name.c_str());

	if (!filein.is_open())
		return std::cout << "Error while opening file." << "\n", 1;
	
	std::string replaced = name + ".replace";
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;

	std::ofstream fileout(replaced.c_str());
	while (std::getline(filein, line))
		fileout << line << "\n";
	
	return 0;
}
