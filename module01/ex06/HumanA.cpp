/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 19:41:22 by sseo              #+#    #+#             */
/*   Updated: 2021/02/21 16:17:34 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name_str, const Weapon &wp_obj) : wp(wp_obj)
{
	name = name_str;
}

void		HumanA::attack(void)
{
	std::cout << name << " attacks with his " << wp.getType() << std::endl;
}
