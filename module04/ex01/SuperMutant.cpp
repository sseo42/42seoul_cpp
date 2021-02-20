/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:33:05 by sseo              #+#    #+#             */
/*   Updated: 2021/02/14 17:48:12 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &copy) : Enemy(copy)
{
}

SuperMutant const &SuperMutant::operator = (SuperMutant const &obj)
{
	setType(obj.getType());
	setHP(obj.getHP());
	return (*this);
}

void		SuperMutant::takeDamage(int dmg)
{
	Enemy::takeDamage(dmg - 3);
}
