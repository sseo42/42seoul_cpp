/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 18:50:12 by sseo              #+#    #+#             */
/*   Updated: 2021/02/22 14:44:29 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::~PowerFist() {}

PowerFist::PowerFist(PowerFist const &copy) : AWeapon(copy) {}

PowerFist const &PowerFist::operator = (PowerFist const &obj)
{
	setName(obj.getName());
	setAPCost(obj.getAPCost());
	setDamage(obj.getDamage());
	return (*this);
}

void		PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
