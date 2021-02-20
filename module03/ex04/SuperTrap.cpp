/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:36:09 by sseo              #+#    #+#             */
/*   Updated: 2021/02/15 17:02:47 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name_str)
{
	setType("SP4R-TP");
	setName(name_str);
	setMaxHP(FragTrap::getMaxHP());
	setMaxEP(NinjaTrap::getMaxEP());
	setMeleeATK(NinjaTrap::getMeleeATK());
	setRangedATK(FragTrap::getRangedATK());
	setArmor(FragTrap::getArmor());
	setLVL(1);
	setHP(FragTrap::getHP());
	setEP(NinjaTrap::getEP());

	std::cout << "Hi i'm baby SP4R-TP <" << name_str << "> !" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SP4R-TP <" << getName() << ">: why you kill me T.T" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &copy) : FragTrap(copy), NinjaTrap(copy)
{
}

SuperTrap const &SuperTrap::operator = (SuperTrap const &obj)
{
	setType(obj.getType());
	setName(obj.getName());
	setMaxHP(obj.getMaxHP());
	setMaxEP(obj.getMaxEP());
	setMeleeATK(obj.getMeleeATK());
	setRangedATK(obj.getRangedATK());
	setArmor(obj.getArmor());
	setLVL(obj.getLVL());
	setHP(obj.getHP());
	setEP(obj.getEP());
	for (int i = 0; i < 5; i++)
	{
		set_verb_pool(obj.get_verb(i), i);
		set_dmg_pool(obj.get_dmg(i), i);
	}
	return (*this);
}
