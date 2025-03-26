/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:24:01 by vsanin            #+#    #+#             */
/*   Updated: 2025/03/26 15:18:50 by vsanin           ###   ########.fr       */
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

	int n = 10;
	Zombie* horde = zombieHorde(n, "biba");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}
