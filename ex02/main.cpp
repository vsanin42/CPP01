/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:24:01 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/02 19:23:48 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Address of the string variable:\t\t" << &str << "\n";
	std::cout << "Address held by pointer to string:\t" << stringPTR << "\n";
	std::cout << "Address held by reference to string:\t" << &stringREF << "\n\n";

	std::cout << "Value of string:\t\t\t" << str << "\n";
	std::cout << "Value pointed to by pointer:\t\t" << *stringPTR << "\n";
	std::cout << "Value pointed to by reference:\t\t" << stringREF << "\n";
	return 0;
}
