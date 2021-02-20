/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:58:00 by sseo              #+#    #+#             */
/*   Updated: 2021/02/14 17:29:26 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name_str) : Victim(name_str)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon const &obj) : Victim(obj)
{
}

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
