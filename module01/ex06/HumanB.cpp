/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 20:06:52 by sseo              #+#    #+#             */
/*   Updated: 2021/02/21 16:23:56 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_str)
{
	name = name_str;
}

void		HumanB::attack(void)
{
	std::cout << name << " attacks with his " << wp->getType() << std::endl;
}

void		HumanB::setWeapon(Weapon &target)
{
	wp = &target;
}
