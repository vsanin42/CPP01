/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:24:50 by vsanin            #+#    #+#             */
/*   Updated: 2025/03/26 14:56:21 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class 	Zombie
{
	private:
		std::string name;
	public:
		void announce(void);
		void setName(const std::string& newName);
		Zombie();
		~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif
