/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 23:09:08 by vsanin            #+#    #+#             */
/*   Updated: 2025/03/27 00:38:52 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <iostream>

void HumanB::attack(void)
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << "\n";
	else
		std::cout << name << " has nothing to attack with :( rip" << "\n";
}

void HumanB::setWeapon(Weapon& newWeapon) { weapon = &newWeapon; }

HumanB::HumanB(const std::string& n) : name(n), weapon(NULL) {}
