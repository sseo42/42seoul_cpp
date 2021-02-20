/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:24:51 by sseo              #+#    #+#             */
/*   Updated: 2021/02/15 20:51:32 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name_str )
{
	srand((unsigned int)time(NULL) * 7);
	challenge_pool[0] = "kill all the mobs";
	challenge_pool[1] = "collect 3 gems";
	challenge_pool[2] = "find a key";
	challenge_pool[3] = "give me 1000 won";
	challenge_pool[4] = "calculate 3 + 2, can you?";
	name = name_str;
	max_hit_points = 100;
	max_energy_points = 50;
	melee_attack_damage = 20;
	ranged_attack_damage = 15;
	armor_damage_reduction = 3;
	level = 1;
	hit_points = 100;
	energy_points = 50;
	std::cout << "Hi i'm baby SC4V-TP <" << name_str << "> !" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP <" << name << ">: why you kill me T.T" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
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
		set_challenge( copy.get_challenge_str(i), i );
}

ScavTrap const &ScavTrap::operator = (ScavTrap const &obj)
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
		set_challenge( obj.get_challenge_str(i), i );
	return (*this);
}

void		ScavTrap::rangedAttack( std::string const &target )
{
	std::cout << "SC4V-TP <" << name << "> attacks <" << target << "> at range, causing <" << ranged_attack_damage << "> points of damage!" << std::endl;
}

void		ScavTrap::meleeAttack( std::string const &target )
{
	std::cout << "SC4V-TP <" << name << "> attacks <" << target << "> at melee, causing <" << melee_attack_damage << "> points of damage!" << std::endl;
}

void		ScavTrap::takeDamage( unsigned int amount )
{
	unsigned	reduced_amt;

	reduced_amt = armor_damage_reduction;
	if (hit_points + reduced_amt < amount)
		hit_points = 0;
	else if (amount > armor_damage_reduction)
		hit_points -= amount - armor_damage_reduction;
	else
		reduced_amt = amount;
	std::cout << "SC4V-TP <" << name << "> takes damage <" << amount << "> and it reduced by <" << reduced_amt << ">, now have <" << hit_points << "> hit_points" << std::endl;
}

void		ScavTrap::beRepaired( unsigned int amount )
{
	hit_points += amount;
	if (hit_points > max_hit_points)
		hit_points = max_hit_points;
	std::cout << "SC4V-TP <" << name << "> is repaired at amount <" << amount << "> and now have <" << hit_points << "> hit_points" << std::endl;
}

void		ScavTrap::challengeNewcomer( void )
{
	static unsigned int	random_num;

	if (!random_num)
		random_num = rand();
	std::cout << "SC4V-TP <" << name << "> " << challenge_pool[random_num % 5] << std::endl;
	random_num *= 2;
}

std::string		ScavTrap::getName(void) const
{
	return (name);
}

unsigned int	ScavTrap::getMaxHP(void) const
{
	return (max_hit_points);
}

unsigned int	ScavTrap::getMaxEP(void) const
{
	return (max_energy_points);
}

unsigned int	ScavTrap::getMeleeATK(void) const
{
	return (melee_attack_damage);
}

unsigned int	ScavTrap::getRangedATK(void) const
{
	return (ranged_attack_damage);
}

unsigned int	ScavTrap::getArmor(void) const
{
	return (armor_damage_reduction);
}

unsigned int	ScavTrap::getLVL(void) const
{
	return (level);
}

unsigned int	ScavTrap::getHP(void) const
{
	return (hit_points);
}

unsigned int	ScavTrap::getEP(void) const
{
	return (energy_points);
}

void			ScavTrap::setName(std::string const &name_str)
{
	name = name_str;
}

void			ScavTrap::setMaxHP(unsigned int val)
{
	max_hit_points = val;
}

void			ScavTrap::setMaxEP(unsigned int val)
{
	max_energy_points = val;
}

void			ScavTrap::setMeleeATK(unsigned int val)
{
	melee_attack_damage = val;
}

void			ScavTrap::setRangedATK(unsigned int val)
{
	ranged_attack_damage = val;
}

void			ScavTrap::setArmor(unsigned int val)
{
	armor_damage_reduction = val;
}

void			ScavTrap::setLVL(unsigned int val)
{
	level = val;
}

void			ScavTrap::setHP(unsigned int val)
{
	hit_points = val;
}

void			ScavTrap::setEP(unsigned int val)
{
	energy_points = val;
}

std::string		ScavTrap::get_challenge_str( int idx ) const
{
	return (challenge_pool[idx]);
}

void			ScavTrap::set_challenge( std::string str, int idx )
{
	challenge_pool[idx] = str;
}
