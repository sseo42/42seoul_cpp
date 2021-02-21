/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 20:48:33 by sseo              #+#    #+#             */
/*   Updated: 2021/02/21 15:59:22 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void		ZombieEvent::setZombieType(std::string type_str)
{
	type = type_str;
}

Zombie		*ZombieEvent::newZombie(std::string name_str)
{
	Zombie		*newbe = new Zombie(name_str, type);

	return (newbe);
}

Zombie		*ZombieEvent::randomChump()
{
	static size_t	val;
	int				name_length = 10;
	std::string		name;
	Zombie			*newbe;

	if (!val)
		val = (size_t)(&name);
	name.resize(name_length);
	for (int i = 0; i < name_length; i++)
		name[i] = (val * i) % 26 + 'a';
	val *= val;

	newbe = newZombie(name);
	newbe->announce();
	return (newbe);
}
