/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:47:01 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/02 22:07:56 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

enum Level {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	NONE
};

Level getLevel(const std::string& level);

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
};

#endif
