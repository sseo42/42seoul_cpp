/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 18:04:43 by sseo              #+#    #+#             */
/*   Updated: 2021/02/15 16:30:49 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	setMaxEP(120);
	setMeleeATK(60);
	setEP(120);
}

NinjaTrap::NinjaTrap(std::string name_str) : ClapTrap()
{
	setType("NJ4-TP");
	setName(name_str);
	setMaxHP(60);
	setMaxEP(120);
	setMeleeATK(60);
	setRangedATK(5);
	setArmor(0);
	setLVL(1);
	setHP(60);
	setEP(120);

	std::cout << "Hi i'm baby NJ4-TP <" << name_str << "> !" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NJ4-TP <" << getName() << ">: why you kill me T.T" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy) : ClapTrap(copy)
{
}

NinjaTrap const &NinjaTrap::operator = (NinjaTrap const &obj)
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
	return (*this);
}

void		NinjaTrap::ninjaShoebox( ClapTrap &target )
{
	std::cout << getType() << " <" << getName() << "> attacks " << target.getType() << " <" << target.getName() << "> at melee, causing <" << getMeleeATK() << "> points of damage!" << std::endl;
	target.takeDamage( getMeleeATK() );
}

void		NinjaTrap::ninjaShoebox( FragTrap &target )
{
	std::cout << getType() << " <" << getName() << "> attacks " << target.getType() << " <" << target.getName() << "> at range, causing <" << getRangedATK() << "> points of damage!" << std::endl;
	target.takeDamage( getRangedATK() );
}

void		NinjaTrap::ninjaShoebox( ScavTrap &target )
{
	std::cout << getType() << " <" << getName() << "> reachs at " << target.getType() << " <" << target.getName() << "> and it gives a challenge" << std::endl;
	target.challengeNewcomer();
}

void		NinjaTrap::ninjaShoebox( NinjaTrap &target )
{
	std::cout << getType() << " <" << getName() << "> heals " << target.getType() << " <" << target.getName() << "> as amount <" << getRangedATK() << "> !" << std::endl;
	target.beRepaired( getRangedATK() );
}
