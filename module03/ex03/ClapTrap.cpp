/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:24:51 by sseo              #+#    #+#             */
/*   Updated: 2021/02/21 22:24:58 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	type = "CL4P-TP";
	name = "None";
	max_hit_points = 50;
	max_energy_points = 50;
	melee_attack_damage = 50;
	ranged_attack_damage = 50;
	armor_damage_reduction = 50;
	level = 1;
	hit_points = 50;
	energy_points = 50;
	std::cout << "obj created !" << std::endl;
}

ClapTrap::ClapTrap(std::string name_str)
{
	type = "CL4P-TP";
	name = name_str;
	max_hit_points = 50;
	max_energy_points = 50;
	melee_attack_damage = 50;
	ranged_attack_damage = 50;
	armor_damage_reduction = 50;
	level = 1;
	hit_points = 50;
	energy_points = 50;
	std::cout << "Hi i'm baby " << type << " <" << name << "> !" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP <" << getName() << ">: why you kill me T.T" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	type = copy.getType();
	name = copy.getName();
	max_hit_points = copy.getMaxHP();
	max_energy_points = copy.getMaxEP();
	melee_attack_damage = copy.getMeleeATK();
	ranged_attack_damage = copy.getRangedATK();
	armor_damage_reduction = copy.getArmor();
	level = copy.getLVL();
	hit_points = copy.getHP();
	energy_points = copy.getEP();
}

ClapTrap const &ClapTrap::operator = (ClapTrap const &obj)
{
	type = obj.getType();
	name = obj.getName();
	max_hit_points = obj.getMaxHP();
	max_energy_points = obj.getMaxEP();
	melee_attack_damage = obj.getMeleeATK();
	ranged_attack_damage = obj.getRangedATK();
	armor_damage_reduction = obj.getArmor();
	level = obj.getLVL();
	hit_points = obj.getHP();
	energy_points = obj.getEP();
	return (*this);
}

void		ClapTrap::rangedAttack( std::string const &target )
{
	std::cout << type << " <" << name << "> attacks <" << target << "> at range, causing <" << ranged_attack_damage << "> points of damage!" << std::endl;
}

void		ClapTrap::meleeAttack( std::string const &target )
{
	std::cout << type << " <" << name << "> attacks <" << target << "> at melee, causing <" << melee_attack_damage << "> points of damage!" << std::endl;
}

void		ClapTrap::takeDamage( unsigned int amount )
{
	unsigned	reduced_amt;

	reduced_amt = armor_damage_reduction;
	if (hit_points + reduced_amt < amount)
		hit_points = 0;
	else if (amount > armor_damage_reduction)
		hit_points -= amount - armor_damage_reduction;
	else
		reduced_amt = amount;
	std::cout << type << " <" << name << "> takes damage <" << amount << "> and it reduced by <" << reduced_amt << ">, now have <" << hit_points << "> hit_points" << std::endl;
}

void		ClapTrap::beRepaired( unsigned int amount )
{
	hit_points += amount;
	if (hit_points > max_hit_points)
		hit_points = max_hit_points;
	std::cout << type << " <" << name << "> is repaired at amount <" << amount << "> and now have <" << hit_points << "> hit_points" << std::endl;
}

std::string		ClapTrap::getType(void) const
{
	return (type);
}

std::string		ClapTrap::getName(void) const
{
	return (name);
}

unsigned int	ClapTrap::getMaxHP(void) const
{
	return (max_hit_points);
}

unsigned int	ClapTrap::getMaxEP(void) const
{
	return (max_energy_points);
}

unsigned int	ClapTrap::getMeleeATK(void) const
{
	return (melee_attack_damage);
}

unsigned int	ClapTrap::getRangedATK(void) const
{
	return (ranged_attack_damage);
}

unsigned int	ClapTrap::getArmor(void) const
{
	return (armor_damage_reduction);
}

unsigned int	ClapTrap::getLVL(void) const
{
	return (level);
}

unsigned int	ClapTrap::getHP(void) const
{
	return (hit_points);
}

unsigned int	ClapTrap::getEP(void) const
{
	return (energy_points);
}

void			ClapTrap::setType(std::string const &type_str)
{
	type = type_str;
}

void			ClapTrap::setName(std::string const &name_str)
{
	name = name_str;
}

void			ClapTrap::setMaxHP(unsigned int val)
{
	max_hit_points = val;
}

void			ClapTrap::setMaxEP(unsigned int val)
{
	max_energy_points = val;
}

void			ClapTrap::setMeleeATK(unsigned int val)
{
	melee_attack_damage = val;
}

void			ClapTrap::setRangedATK(unsigned int val)
{
	ranged_attack_damage = val;
}

void			ClapTrap::setArmor(unsigned int val)
{
	armor_damage_reduction = val;
}

void			ClapTrap::setLVL(unsigned int val)
{
	level = val;
}

void			ClapTrap::setHP(unsigned int val)
{
	hit_points = val;
}

void			ClapTrap::setEP(unsigned int val)
{
	energy_points = val;
}
