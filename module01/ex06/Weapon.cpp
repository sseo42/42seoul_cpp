/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 19:50:21 by sseo              #+#    #+#             */
/*   Updated: 2021/02/21 16:20:54 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string	type_str)
{
	type = type_str;
}

const std::string	&Weapon::getType(void) const
{
	return (type);
}

void				Weapon::setType(std::string type_str)
{
	this->type = type_str;
}
