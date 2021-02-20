/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 23:38:15 by sseo              #+#    #+#             */
/*   Updated: 2021/02/17 17:31:41 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

void		ZombieHorde::all_announce()
{
	if (next)
	{
		newbe->announce();
		next->all_announce();
	}
}

ZombieHorde::ZombieHorde(int N)
{
	static size_t	val;
	int				name_length = 10;
	std::string		name;

	newbe = 0;
	next = 0;
	if (N)
	{
		if (!val)
			val = (size_t)(this);
		name.resize(name_length);
		for (int i = 0; i < name_length; i++)
			name[i] = (val * i) % 26 + 'a';
		val = val * val + 1;

		newbe = new Zombie(name, "tester");
		next = new ZombieHorde(N - 1);
	}
}

ZombieHorde::~ZombieHorde()
{
	delete newbe;
	delete next;
}

void		ZombieHorde::announce()
{
	all_announce();
}
