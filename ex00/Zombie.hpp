/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:24:50 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/02 18:23:52 by vsanin           ###   ########.fr       */
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
		Zombie(const std::string& zombieName);
		~Zombie();
};

Zombie* newZombie(std::string name);
void 	randomChump(std::string name);

#endif
