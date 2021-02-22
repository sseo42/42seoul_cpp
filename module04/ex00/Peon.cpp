/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:58:00 by sseo              #+#    #+#             */
/*   Updated: 2021/02/22 14:31:48 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() : Victim("INPOSSIBLE") {}

Peon::Peon(std::string name_str) : Victim(name_str)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon const &copy) : Victim(copy) {}

Peon const &Peon::operator = (Peon const &obj)
{
	if (this == &obj)
		return (*this);
	setName(obj.getName());
	return (*this);
}

void Peon::getPolymorphed(void) const
{
	std::cout << getName() << " has been tuned into a pink pony!" << std::endl;
}

FakePeon::FakePeon() : Victim("INPOSSIBLE") {}

FakePeon::FakePeon(std::string name_str) : Victim(name_str)
{
	std::cout << "F**k *uc*." << std::endl;
}

FakePeon::~FakePeon()
{
	std::cout << "Nooooo..." << std::endl;
}

FakePeon::FakePeon(FakePeon const &copy) : Victim(copy) {}

FakePeon const &FakePeon::operator = (FakePeon const &obj)
{
	if (this == &obj)
		return (*this);
	setName(obj.getName());
	return (*this);
}

void FakePeon::getPolymorphed(void) const
{
	std::cout << getName() << " has been turn into an angry mama!" << std::endl;
}
