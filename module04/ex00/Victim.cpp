/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:33:51 by sseo              #+#    #+#             */
/*   Updated: 2021/02/14 17:28:57 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name_str)
{
	name = name_str;
	std::cout << "Some random victim called " << name_str << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(Victim const &obj)
{
	name = obj.getName();
}

Victim const &Victim::operator = (Victim const &obj)
{
	if (this == &obj)
		return (*this);
	name = obj.getName();
	return (*this);
}

void		Victim::getPolymorphed(void) const
{
	std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}

std::string			Victim::getName(void) const
{
	return (name);
}

void				Victim::setName(std::string name_str)
{
	name = name_str;
}

std::ostream &operator << (std::ostream &os, Victim const &obj)
{
	os << "I'm " << obj.getName() << " and I like otters!" << std::endl;
	return (os);
}
