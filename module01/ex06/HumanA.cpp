/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 19:41:22 by sseo              #+#    #+#             */
/*   Updated: 2021/02/17 17:41:50 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::atk(void)
{
	std::cout << name << " attacks with his " << wp.type << std::endl;
}

HumanA::HumanA(std::string name_str, const Weapon &wp_obj) : wp(wp_obj)
{
	name = name_str;
}

void		HumanA::attack(void)
{
	atk();
}
