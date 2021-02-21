/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:24:51 by sseo              #+#    #+#             */
/*   Updated: 2021/02/21 22:27:27 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	challenge_pool[0] = "kill all the mobs";
	challenge_pool[1] = "collect 3 gems";
	challenge_pool[2] = "find a key";
	challenge_pool[3] = "give me 1000 won";
	challenge_pool[4] = "calculate 3 + 2, can you?";
	setType("SC4V-TP");
	setName("None");
	setMaxHP(100);
	setMaxEP(50);
	setMeleeATK(20);
	setRangedATK(15);
	setArmor(3);
	setLVL(1);
	setHP(100);
	setEP(50);

	std::cout << "YOU JUST CREATED SCAVTRAP WITH NAME \"None\"" << std::endl;
}

ScavTrap::ScavTrap( std::string name_str ) : ClapTrap()
{
	challenge_pool[0] = "kill all the mobs";
	challenge_pool[1] = "collect 3 gems";
	challenge_pool[2] = "find a key";
	challenge_pool[3] = "give me 1000 won";
	challenge_pool[4] = "calculate 3 + 2, can you?";
	setType("SC4V-TP");
	setName(name_str);
	setMaxHP(100);
	setMaxEP(50);
	setMeleeATK(20);
	setRangedATK(15);
	setArmor(3);
	setLVL(1);
	setHP(100);
	setEP(50);

	std::cout << "Hi i'm baby SC4V-TP <" << name_str << "> !" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP <" << getName() << ">: why you kill me T.T" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
	for (int i = 0; i < 5; i++)
		set_challenge( copy.get_challenge_str(i), i );
}

ScavTrap const &ScavTrap::operator = (ScavTrap const &obj)
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
		set_challenge( obj.get_challenge_str(i), i );
	return (*this);
}

void		ScavTrap::challengeNewcomer( void )
{
	static unsigned int	random_num;

	if (!random_num)
	{
		srand((unsigned int)time(NULL) * 7);
		random_num = rand();
	}
	std::cout << getType() << " <" << getName() << "> " << challenge_pool[random_num % 5] << std::endl;
	random_num *= 7;
}

std::string		ScavTrap::get_challenge_str( int idx ) const
{
	return (challenge_pool[idx]);
}

void			ScavTrap::set_challenge( std::string str, int idx )
{
	challenge_pool[idx] = str;
}
