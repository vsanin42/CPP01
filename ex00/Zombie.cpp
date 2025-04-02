/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:30:03 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/02 19:48:18 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

void Zombie::announce(void)
{
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << "\n";
}

Zombie::Zombie(const std::string& zombieName) : name(zombieName) {}

Zombie::~Zombie(void)
{
	std::cout << name << ": Destroooyed..." << "\n";
}
