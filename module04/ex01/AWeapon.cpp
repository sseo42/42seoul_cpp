/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:53:30 by sseo              #+#    #+#             */
/*   Updated: 2021/02/14 17:35:11 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name_str, int apcost_int, int damage_int)
{
	name = name_str;
	apcost = apcost_int;
	damage = damage_int;
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(AWeapon const &copy)
{
	name = copy.getName();
	apcost = copy.getAPCost();
	damage = copy.getDamage();
}

AWeapon const &AWeapon::operator = (AWeapon const &obj)
{
	if (this == &obj)
		return (*this);
	name = obj.getName();
	apcost = obj.getAPCost();
	damage = obj.getDamage();
	return (*this);
}

std::string		AWeapon::getName(void) const
{
	return (name);
}

int				AWeapon::getAPCost(void) const
{
	return (apcost);
}

int				AWeapon::getDamage(void) const
{
	return (damage);
}

void		AWeapon::setName(std::string name_str)
{
	name = name_str;
}

void		AWeapon::setAPCost(int apcost_int)
{
	apcost = apcost_int;
}

void		AWeapon::setDamage(int damage_int)
{
	damage = damage_int;
}
