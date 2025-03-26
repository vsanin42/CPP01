/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:24:01 by vsanin            #+#    #+#             */
/*   Updated: 2025/03/26 13:56:03 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	std::cout << "Zombie tests!" << "\n"
			  << "Disclaimer: no zombies were harmed in the making of this exercise." << "\n"
			  << "(please ignore them being destroyed :3)" << "\n";
	std::cout << "\n-------------------------------------------------" << "\n\n";

	std::cout << "Constructed on stack by parametrized constructor:" << "\n";
	Zombie z1("Biba");
	Zombie z2("Boba");
	z1.announce();
	z2.announce();
	std::cout << "\n-------------------------------------------------" << "\n\n";
	
	std::cout << "Constructed on stack by randomChump():" << "\n";
	randomChump("Beba");
	std::cout << "(went out of scope and destroyed instantly)" << "\n";
	std::cout << "\n-------------------------------------------------" << "\n\n";
	
	try
	{
		std::cout << "Constructed on heap by newZombie():" << "\n";
		Zombie* heapZombie = newZombie("Buba");
		heapZombie->announce();
		std::cout << "Manual deletion (otherwise memory leak):" << "\n";
		delete heapZombie;
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << "Error while creating heapZombie: " << e.what() << '\n';
	}
	
	std::cout << "\n-------------------------------------------------" << "\n\n";
	
	std::cout << "Done!" << "\n"
			  << "Biba and Boba are about to be destroyed too (main returns):" << "\n";
	return 0;
}
