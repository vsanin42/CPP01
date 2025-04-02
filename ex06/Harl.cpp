/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:47:27 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/02 22:08:11 by vsanin           ###   ########.fr       */
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

void Harl::complain(std::string level)
{
	std::cout << "-----" << "\n";
	switch (getLevel(level))
	{
		case DEBUG:
			(this->*(&Harl::debug))();
			/* fallthrough */
		case INFO:
			(this->*(&Harl::info))();
			/* fallthrough */
		case WARNING:
			(this->*(&Harl::warning))();
			/* fallthrough */
		case ERROR:
			(this->*(&Harl::error))();
			break;
		default:
			std::cout << "Harl: No output message matched the complaint type!" << "\n";
	}
	std::cout << "-----" << "\n";
}
