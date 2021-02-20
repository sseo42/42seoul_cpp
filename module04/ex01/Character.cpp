/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 14:14:49 by sseo              #+#    #+#             */
/*   Updated: 2021/02/14 18:04:36 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name_str) : wp_p(0)
{
	name = name_str;
	ap = MAX_AP;
	wp_p = 0;
}

Character::~Character()
{
}

Character::Character(Character const &copy)
{
	name = copy.getName();
	ap = copy.getAP();
	if (copy.getWP())
		wp_p = copy.getWP();
	else
		wp_p = 0;
}

Character const &Character::operator = (Character const &obj)
{
	if (this == &obj)
		return (*this);
	if (wp_p)
		delete wp_p;
	name = obj.getName();
	ap = obj.getAP();
	if (obj.getWP())
		wp_p = obj.getWP();
	else
		wp_p = 0;
	return (*this);
}

void		Character::recoverAP(void)
{
	if (ap + 10 > MAX_AP)
		ap = MAX_AP;
	else
		ap += 10;
}

void		Character::equip(AWeapon *wp_pointer)
{
	wp_p = wp_pointer;
}

void		Character::attack(Enemy *enemy_pointer)
{
	int		ap_cost;

	if (enemy_pointer && wp_p)
	{
		ap_cost = wp_p->getAPCost();
		if (ap >= ap_cost)
		{
			std::cout << name << " attacks " << enemy_pointer->getType() << " with a " << wp_p->getName() << std::endl;
			ap -= ap_cost;
			wp_p->attack();
			enemy_pointer->takeDamage(wp_p->getDamage());
			if (enemy_pointer->getHP() <= 0)
				delete enemy_pointer;
		}
		else
			std::cout << name << " doesn't have enough AP to use " << wp_p->getName() << std::endl;
	}
}

std::string	Character::getName(void) const
{
	return (name);
}

int			Character::getAP(void) const
{
	return (ap);
}

AWeapon		*Character::getWP(void) const
{
	return (wp_p);
}

std::ostream &operator << (std::ostream &os, Character const &obj)
{
	os << obj.getName() << " has " << obj.getAP() << " AP and ";
	if (obj.getWP())
		os << "wields a " << obj.getWP()->getName() << std::endl;
	else
		os << "is unarmed" << std::endl;
	return (os);
}
