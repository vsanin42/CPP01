/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:33:26 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/02 19:07:10 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return NULL;
	Zombie* horde = new Zombie[N];
	std::ostringstream stream;

	for (int i = 0; i < N; i++)
	{
		stream << i + 1;
		std::string zombieName = name + "_" + stream.str();
		horde[i].setName(zombieName);
		stream.str("");
		stream.clear();
	}   
	return horde;
}
