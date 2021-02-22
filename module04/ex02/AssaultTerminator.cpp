/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 15:12:16 by sseo              #+#    #+#             */
/*   Updated: 2021/02/22 15:13:30 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copy) : ISpaceMarine(copy)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator const &AssaultTerminator::operator = (AssaultTerminator const &obj)
{
	//no variables
	if (this == &obj)
		return (*this);
	return (*this);
}

ISpaceMarine		*AssaultTerminator::clone(void) const
{
	ISpaceMarine	*out = new AssaultTerminator(*this);
	return (out);
}

void				AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void				AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void				AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
