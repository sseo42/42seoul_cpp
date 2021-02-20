/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 00:22:42 by sseo              #+#    #+#             */
/*   Updated: 2021/02/16 02:06:35 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria(std::string const &type)
{
	_type = type;
	_xp = 0;
}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const &copy)
{
	_type = copy.getType();
	_xp = copy.getXP();
}

AMateria const &AMateria::operator = (AMateria const &obj)
{
	_xp = obj.getXP();
	return (*this);
}

void				AMateria::use(ICharacter &target)
{
	_xp += 10;
	std::cout << target.getName();
}

std::string const	&AMateria::getType(void) const
{
	return (_type);
}

unsigned int		AMateria::getXP(void) const
{
	return (_xp);
}

void				AMateria::setXP(unsigned int xp)
{
	_xp = xp;
}

/*
void				AMateria::setType(std::string const &type)
{
	_type = type;
}

*/
