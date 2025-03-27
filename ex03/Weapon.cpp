/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 23:10:03 by vsanin            #+#    #+#             */
/*   Updated: 2025/03/27 00:14:48 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType(void) const { return type; }

void Weapon::setType(const std::string& newType) { type = newType; }

Weapon::Weapon(const std::string& t) : type(t) {}
