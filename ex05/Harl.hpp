/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:47:01 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/02 21:48:51 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

struct Complaint;

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Harl();
		~Harl();
		void complain(std::string level);
		Complaint* getComplaintArray(void);
};
	
typedef void (Harl::*ptfHarl) (void);

struct Complaint
{
	std::string	name;
	ptfHarl 	func;
};

#endif
