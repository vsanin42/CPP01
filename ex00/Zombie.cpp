/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:30:03 by vsanin            #+#    #+#             */
/*   Updated: 2025/03/26 11:20:40 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void Zombie::announce(void)
{
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << "\n";
}

Zombie::Zombie(std::string zombieName) : name(zombieName) {}

Zombie::~Zombie(void)
{
	std::cout << name << ": Destroooyed..." << "\n";
}
