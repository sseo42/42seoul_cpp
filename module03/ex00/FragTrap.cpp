/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:24:51 by sseo              #+#    #+#             */
/*   Updated: 2021/02/21 21:53:30 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "YOU JUST CREATED EMPTY FRAGTRAP" << std::endl;
}
	
FragTrap::FragTrap( std::string name_str )
{
	srand((unsigned int)time(NULL));
	verb_str_pool[0] = "strikes";
	verb_str_pool[1] = "smashs";
	verb_str_pool[2] = "pushs";
	verb_str_pool[3] = "tickles";
	verb_str_pool[4] = "kicks";
	for (int i = 0; i < 5; i++)
		dmg_pool[i] = (i + 1) * 10;
	name = name_str;
	max_hit_points = 100;
	max_energy_points = 100;
	melee_attack_damage = 30;
	ranged_attack_damage = 20;
	armor_damage_reduction = 5;
	level = 1;
	hit_points = 100;
	energy_points = 100;
	std::cout << "Hi i'm baby <" << name << "> !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "<" << name << ">: why you kill me T.T" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	setName(copy.getName());
	setMaxHP(copy.getMaxHP());
	setMaxEP(copy.getMaxEP());
	setMeleeATK(copy.getMeleeATK());
	setRangedATK(copy.getRangedATK());
	setArmor(copy.getArmor());
	setLVL(copy.getLVL());
	setHP(copy.getHP());
	setEP(copy.getEP());
	for (int i = 0; i < 5; i++)
	{
		set_verb_pool(copy.get_verb(i), i);
		set_dmg_pool(copy.get_dmg(i), i);
	}
}

FragTrap const &FragTrap::operator = (FragTrap const &obj)
{
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

void		FragTrap::rangedAttack( std::string const &target )
{
	std::cout << "FR4G-TP <" << name << "> attacks <" << target << "> at range, causing <" << ranged_attack_damage << "> points of damage!" << std::endl;
}

void		FragTrap::meleeAttack( std::string const &target )
{
	std::cout << "FR4G-TP <" << name << "> attacks <" << target << "> at melee, causing <" << melee_attack_damage << "> points of damage!" << std::endl;
}

void		FragTrap::takeDamage( unsigned int amount )
{
	unsigned	reduced_amt;

	reduced_amt = armor_damage_reduction;
	if (hit_points + reduced_amt < amount)
		hit_points = 0;
	else if (amount > armor_damage_reduction)
		hit_points -= amount - armor_damage_reduction;
	else
		reduced_amt = amount;
	std::cout << "FR4G-TP <" << name << "> takes damage <" << amount << "> and it reduced by <" << reduced_amt << ">, now have <" << hit_points << "> hit_points" << std::endl;
}

void		FragTrap::beRepaired( unsigned int amount )
{
	hit_points += amount;
	if (hit_points > max_hit_points)
		hit_points = max_hit_points;
	std::cout << "FR4G-TP <" << name << "> is repaired at amount <" << amount << "> and now have <" << hit_points << "> hit_points" << std::endl;
}

void		FragTrap::vaulthunter_dot_exe( std::string const &target )
{
	static unsigned int	random_num;

	if (!random_num)
		random_num = rand();
	if (energy_points >= 25)
	{
		std::cout << "FR4G-TP <" << name << "> " << verb_str_pool[random_num % 5] << " " << target << " with damages " << dmg_pool[(random_num * 2) % 5] << std::endl;
		random_num *= 2;
		energy_points -= 25;
	}
	else
		std::cout << "not enough energy.." << std::endl;
}

std::string		FragTrap::get_verb( int idx ) const
{
	return (verb_str_pool[idx]);
}

unsigned int	FragTrap::get_dmg( int idx ) const
{
	return (dmg_pool[idx]);
}

void			FragTrap::set_verb_pool( std::string verb_str, int idx )
{
	verb_str_pool[idx] = verb_str;
}

void			FragTrap::set_dmg_pool( unsigned int dmg_uint, int idx )
{
	dmg_pool[idx] = dmg_uint;
}

std::string		FragTrap::getName(void) const
{
	return (name);
}

unsigned int	FragTrap::getMaxHP(void) const
{
	return (max_hit_points);
}

unsigned int	FragTrap::getMaxEP(void) const
{
	return (max_energy_points);
}

unsigned int	FragTrap::getMeleeATK(void) const
{
	return (melee_attack_damage);
}

unsigned int	FragTrap::getRangedATK(void) const
{
	return (ranged_attack_damage);
}

unsigned int	FragTrap::getArmor(void) const
{
	return (armor_damage_reduction);
}

unsigned int	FragTrap::getLVL(void) const
{
	return (level);
}

unsigned int	FragTrap::getHP(void) const
{
	return (hit_points);
}

unsigned int	FragTrap::getEP(void) const
{
	return (energy_points);
}

void			FragTrap::setName(std::string const &name_str)
{
	name = name_str;
}

void			FragTrap::setMaxHP(unsigned int val)
{
	max_hit_points = val;
}

void			FragTrap::setMaxEP(unsigned int val)
{
	max_energy_points = val;
}

void			FragTrap::setMeleeATK(unsigned int val)
{
	melee_attack_damage = val;
}

void			FragTrap::setRangedATK(unsigned int val)
{
	ranged_attack_damage = val;
}

void			FragTrap::setArmor(unsigned int val)
{
	armor_damage_reduction = val;
}

void			FragTrap::setLVL(unsigned int val)
{
	level = val;
}

void			FragTrap::setHP(unsigned int val)
{
	hit_points = val;
}

void			FragTrap::setEP(unsigned int val)
{
	energy_points = val;
}
