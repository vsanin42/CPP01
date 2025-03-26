/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:24:01 by vsanin            #+#    #+#             */
/*   Updated: 2025/03/26 23:01:47 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Address of string:\t\t" << &str << "\n";
	std::cout << "Address of pointer to str:\t" << &stringPTR << "\n";
	std::cout << "Address of reference to str:\t" << &stringREF << "\n\n";

	std::cout << "Value of string:\t\t" << str << "\n";
	std::cout << "Value pointed to by pointer:\t" << stringPTR << "\n";
	std::cout << "Value pointed to by reference:\t" << stringREF << "\n";
	return 0;
}
