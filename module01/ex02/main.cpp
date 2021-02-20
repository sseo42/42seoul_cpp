/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 20:54:04 by sseo              #+#    #+#             */
/*   Updated: 2021/02/17 17:22:37 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int			main(void)
{
	ZombieEvent		evnt;

	evnt.setZombieType("tester");

	std::cout << "**test 3mobs using 'newZombie' function**" << std::endl;
	Zombie		*mob = evnt.newZombie("Dobby");
	Zombie		*mob2 = evnt.newZombie("Potter");
	Zombie		*mob3 = evnt.newZombie("Voldemort");

	mob->announce();
	mob2->announce();
	mob3->announce();

	delete mob;
	delete mob2;
	delete mob3;

	std::cout << "**test 2random mobs using 'randomChump' function**" << std::endl;
	Zombie		*random_mob1 = evnt.randomChump();
	Zombie		*random_mob2 = evnt.randomChump();

	delete random_mob1;
	delete random_mob2;
	return (0);
}
