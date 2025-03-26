/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:30:03 by vsanin            #+#    #+#             */
/*   Updated: 2025/03/26 14:48:53 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void Zombie::announce(void)
{
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << "\n";
}

void Zombie::setName(const std::string& newName) { name = newName; }

Zombie::Zombie() {}

Zombie::~Zombie(void)
{
	std::cout << name << ": Destroooyed..." << "\n";
}
