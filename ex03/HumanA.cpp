/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 23:08:17 by vsanin            #+#    #+#             */
/*   Updated: 2025/03/27 00:10:39 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

#include <iostream>

void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}

HumanA::HumanA(const std::string& n, Weapon& w) : name(n), weapon(w) {}
