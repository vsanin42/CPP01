/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:24:01 by vsanin            #+#    #+#             */
/*   Updated: 2025/03/26 22:16:14 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	std::cout << "More zombie tests!" << "\n"
			  << "Disclaimer: no zombies were harmed in the making of this exercise." << "\n"
			  << "(please ignore them being destroyed :3)" << "\n";
	std::cout << "\n-------------------------------------------------" << "\n\n";

	Zombie* horde;
	int		n;

	std::cout << "N = 1" << "\n";
	n = 1;
	horde = zombieHorde(n, "biba");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	std::cout << "\n-------------------------------------------------" << "\n\n";

	std::cout << "N = 5" << "\n";
	n = 5;
	horde = zombieHorde(n, "biba");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	std::cout << "\n-------------------------------------------------" << "\n\n";

	std::cout << "N = 100" << "\n";
	n = 100;
	horde = zombieHorde(n, "biba");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	std::cout << "\n-------------------------------------------------" << "\n\n";
	
	std::cout << "N = 0" << "\n";
	n = 0;
	horde = zombieHorde(n, "biba");
	if (horde == NULL)
		std::cout << "Invalid N value!" << "\n";
	else	
	{
		for (int i = 0; i < n; i++)
			horde[i].announce();
		delete[] horde;
	}
	std::cout << "\n-------------------------------------------------" << "\n\n";

	std::cout << "N = -1" << "\n";
	n = -1;
	horde = zombieHorde(n, "biba");
	if (horde == NULL)
		std::cout << "Invalid N value!" << "\n";
	else	
	{
		for (int i = 0; i < n; i++)
			horde[i].announce();
		delete[] horde;
	}
	std::cout << "\n-------------------------------------------------" << "\n\n";
	
	return 0;
}
