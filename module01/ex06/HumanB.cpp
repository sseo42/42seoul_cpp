/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 20:06:52 by sseo              #+#    #+#             */
/*   Updated: 2021/02/17 17:44:29 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::atk(void)
{
	std::cout << name << " attacks with his " << wp->type << std::endl;
}

void	HumanB::change_wp(Weapon &wp_obj)
{
	wp = &wp_obj;
}

HumanB::HumanB(std::string name_str)
{
	name = name_str;
}

void		HumanB::attack(void)
{
	atk();
}

void		HumanB::setWeapon(Weapon &target)
{
	change_wp(target);
}
