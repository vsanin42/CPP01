/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:47:27 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/01 20:50:51 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

Level getLevel(const std::string& level)
{
	if (level == "DEBUG")	return DEBUG;
	if (level == "INFO")	return INFO;
	if (level == "WARNING")	return WARNING;
	if (level == "ERROR")	return ERROR;
	return NONE;
}

void Harl::debug(void)		{ std::cout << "Harl: Debug." << "\n"; }
void Harl::info(void)		{ std::cout << "Harl: Info." << "\n"; }
void Harl::warning(void)	{ std::cout << "Harl: Warning." << "\n"; }
void Harl::error(void)		{ std::cout << "Harl: Error." << "\n"; }
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

	std::cout << "-----" << "\n";
	switch (getLevel(level))
	{
		case DEBUG:
			(this->*(complaintArray[DEBUG].func))();
			/* fallthrough */
		case INFO:
			(this->*(complaintArray[INFO].func))();
			/* fallthrough */
		case WARNING:
			(this->*(complaintArray[WARNING].func))();
			/* fallthrough */
		case ERROR:
			(this->*(complaintArray[ERROR].func))();
			break;
		default:
			std::cout << "Harl: No output message matched the complaint type!" << "\n";
	}
	std::cout << "-----" << "\n";
}
