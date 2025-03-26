/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:33:26 by vsanin            #+#    #+#             */
/*   Updated: 2025/03/26 15:25:31 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde( int N, std::string name )
{
	// handle negative and intmax
	Zombie* horde = new Zombie[N];
	std::ostringstream stream;
	std::string number;

	for (int i = 0; i < N; i++)
	{
		stream << i + 1;
		number = stream.str();
		std::string zombieName = name + "_" + number;
		horde[i].setName(zombieName);
		stream.str("");
		stream.clear();
	}   
	return horde;
}
