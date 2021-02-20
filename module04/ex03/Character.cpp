/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 01:06:20 by sseo              #+#    #+#             */
/*   Updated: 2021/02/16 01:40:32 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
{
	_name = name;
	for (int i = 0; i < max_slot; i++)
		inventory[i] = 0;
}

Character::~Character() {}

Character::Character(Character const &copy)
{
	_name = copy.getName();
	for (int i = 0; i < max_slot; i++)
	{
		if (copy.getItem(i))
			inventory[i] = copy.getItem(i)->clone();
		else
			inventory[i] = 0;
	}
}

Character const &Character::operator = (Character const &obj)
{
	_name = obj.getName();
	for (int i = 0; i < max_slot; i++)
	{
		if (inventory[i])
			delete inventory[i];
		if (obj.getItem(i))
			inventory[i] = obj.getItem(i)->clone();
		else
			inventory[i] = 0;
	}
	return (*this);
}

std::string const		&Character::getName(void) const
{
	return (_name);
}

void					Character::equip(AMateria *m)
{
	for (int i = 0; i < max_slot; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			break ;
		}
	}
}

void					Character::unequip(int idx)
{
	if (idx >= 0 && idx < max_slot)
		inventory[idx] = 0;
}

void					Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < max_slot && inventory[idx])
	{
		inventory[idx]->use(target);
	}
}

AMateria				*Character::getItem(int idx) const
{
	if (idx >= 0 && idx < max_slot)
		return (inventory[idx]);
	return (0);
}
