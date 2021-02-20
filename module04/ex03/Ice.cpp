/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 00:50:10 by sseo              #+#    #+#             */
/*   Updated: 2021/02/16 02:03:34 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(Ice const &copy) : AMateria(copy) {}

Ice const &Ice::operator = (Ice const &obj)
{
	setXP(obj.getXP());
	return (*this);
}

AMateria		*Ice::clone(void) const
{
	return (new Ice(*this));
}

void			Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at ";
	AMateria::use(target);
	std::cout << " *" << std::endl;
}
