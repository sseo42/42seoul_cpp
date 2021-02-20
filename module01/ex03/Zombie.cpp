/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 20:46:24 by sseo              #+#    #+#             */
/*   Updated: 2021/02/17 17:29:29 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name_str, std::string type_str)
{
	name = name_str;
	type = type_str;
	std::cout << "Hi i'm baby zombie \"" << this->name << "\"!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "baby zombie \"" << this->name << "\" is dead: " << "Why you kill me T.T" << std::endl;
}

void		Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ")> " << "What's up?" << std::endl;
}
