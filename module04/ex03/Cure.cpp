/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 01:02:30 by sseo              #+#    #+#             */
/*   Updated: 2021/02/22 15:18:07 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(Cure const &copy) : AMateria(copy) {}

Cure const &Cure::operator = (Cure const &obj)
{
	if (this == &obj)
		return (*this);
	setXP(obj.getXP());
	return (*this);
}

AMateria		*Cure::clone(void) const
{
	return (new Cure(*this));
}

void			Cure::use(ICharacter &target)
{
	std::cout << "* heals ";
	AMateria::use(target);
 	std::cout << "’s wounds *" << std::endl;
}
