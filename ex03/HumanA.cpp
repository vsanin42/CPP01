/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 23:08:17 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/02 19:55:59 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

#include <iostream>
#include <string>

void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}

HumanA::HumanA(const std::string& n, Weapon& w) : name(n), weapon(w) {}
