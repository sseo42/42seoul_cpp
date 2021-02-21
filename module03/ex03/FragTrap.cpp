/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:24:51 by sseo              #+#    #+#             */
/*   Updated: 2021/02/21 22:25:57 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	setMaxHP(100);
	setRangedATK(20);
	setArmor(5);
	setHP(100);

	verb_str_pool[0] = "strikes";
	verb_str_pool[1] = "smashs";
	verb_str_pool[2] = "pushs";
	verb_str_pool[3] = "tickles";
	verb_str_pool[4] = "kicks";
	for (int i = 0; i < 5; i++)
		dmg_pool[i] = (i + 1) * 10;
	std::cout << "YOU JUST CREATED EMPTY FRAGTRAP" << std::endl;
}

FragTrap::FragTrap( std::string name_str ) : ClapTrap()
{
	setType("FR4G-TP");
	setName(name_str);
	setMaxHP(100);
	setMaxEP(100);
	setMeleeATK(30);
	setRangedATK(20);
	setArmor(5);
	setLVL(1);
	setHP(100);
	setEP(100);

	verb_str_pool[0] = "strikes";
	verb_str_pool[1] = "smashs";
	verb_str_pool[2] = "pushs";
	verb_str_pool[3] = "tickles";
	verb_str_pool[4] = "kicks";
	for (int i = 0; i < 5; i++)
		dmg_pool[i] = (i + 1) * 10;

	std::cout << "Hi i'm baby FR4G-TP <" << name_str << "> !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP <" << getName() << ">: why you kill me T.T" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
	for (int i = 0; i < 5; i++)
	{
		set_verb_pool(copy.get_verb(i), i);
		set_dmg_pool(copy.get_dmg(i), i);
	}
}

FragTrap const &FragTrap::operator = (FragTrap const &obj)
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

void		FragTrap::vaulthunter_dot_exe( std::string const &target )
{
	static unsigned int	random_num;
	unsigned int		ep;

	ep = getEP();
	if (!random_num)
	{
		srand((unsigned int)time(NULL));
		random_num = rand();
	}
	if (ep >= 25)
	{
		std::cout << getType() << " <" << getName() << "> " << verb_str_pool[random_num % 5] << " " << target << " with damages " << dmg_pool[(random_num * 2) % 5] << std::endl;
		setEP(ep - 25);
		random_num *= 11;
	}
	else
		std::cout << "not enough energy..(" << getEP() << ")" << std::endl;
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
