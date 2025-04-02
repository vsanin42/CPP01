/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 23:09:08 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/02 19:56:30 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <iostream>
#include <string>

void HumanB::attack(void)
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << "\n";
	else
		std::cout << name << " has nothing to attack with :( RIP" << "\n";
}

void HumanB::setWeapon(Weapon& newWeapon) { weapon = &newWeapon; }

HumanB::HumanB(const std::string& n) : name(n), weapon(NULL) {}
