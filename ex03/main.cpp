/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:24:01 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/02 19:49:12 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

#include <iostream>

int main(void)
{
	{
		Weapon weapon = Weapon("kindness and positivity");
		HumanA biba("Biba", weapon);

		biba.attack();
		weapon.setType("hydrogen bomb");
		biba.attack();
	}
	std::cout << std::endl;
	{
		Weapon weapon = Weapon("kindness and positivity");
		HumanB boba("Boba");

		boba.attack();
		boba.setWeapon(weapon);
		boba.attack();
		weapon.setType("hydrogen bomb");
		boba.attack();
	}
	return 0;
}
