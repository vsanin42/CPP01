/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:47:27 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/01 18:33:34 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

void Harl::debug(void) { std::cout << "Harl: Debug." << "\n"; }
void Harl::info(void) { std::cout << "Harl: Info." << "\n"; }
void Harl::warning(void) { std::cout << "Harl: Warning." << "\n"; }
void Harl::error(void) { std::cout << "Harl: Error." << "\n"; }
Harl::Harl() {};
Harl::~Harl() {};

Complaint* Harl::getComplaintArray(void)
{
	static Complaint complaintArray[] = {
		{ "DEBUG", &Harl::debug },
		{ "INFO", &Harl::info },
		{ "WARNING", &Harl::warning }, 
		{ "ERROR", &Harl::error }
	};
	return complaintArray;
}

void Harl::complain(std::string level)
{
	Complaint* complaintArray = Harl::getComplaintArray();
	int i; 

	for (i = 0; i < 4; i++)
	{
		if (!complaintArray[i].name.compare(level))
		{
			(this->*(complaintArray[i].func))();
			break;
		}
	}
	if (i == 4)
		std::cout << "Harl: No output message matched the complaint type!" << "\n";
}
