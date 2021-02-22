/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 14:49:38 by sseo              #+#    #+#             */
/*   Updated: 2021/02/22 15:13:15 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &copy) : ISpaceMarine(copy)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine const &TacticalMarine::operator = (TacticalMarine const &obj)
{
	//no variables
	if (this == &obj)
		return (*this);
	return (*this);
}

ISpaceMarine	*TacticalMarine::clone(void) const
{
	ISpaceMarine	*out = new TacticalMarine(*this);
	
	return (out);
}

void			TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void			TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
