/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 13:53:49 by sseo              #+#    #+#             */
/*   Updated: 2021/02/14 17:19:13 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name_str, std::string title_str)
{
	name = name_str;
	title = title_str;
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &obj)
{
	name = obj.getName();
	title = obj.getTitle();
}

Sorcerer const &Sorcerer::operator = (Sorcerer const &obj)
{
	if (this == &obj)
		return (*this);
	name = obj.getName();
	title = obj.getTitle();
	return (*this);
}

void		Sorcerer::polymorph(Victim const &target) const
{
	target.getPolymorphed();
}

std::string			Sorcerer::getName(void) const
{
	return (name);
}

std::string			Sorcerer::getTitle(void) const
{
	return (title);
}

std::ostream &operator << (std::ostream &os, Sorcerer const &obj)
{
	os << "I am " << obj.getName() << ", " << obj.getTitle() << ", and I like ponies!" << std::endl;
	return (os);
}
