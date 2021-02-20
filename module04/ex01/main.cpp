/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 18:01:03 by sseo              #+#    #+#             */
/*   Updated: 2021/02/14 18:24:10 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int			main(void)
{
	Character	*me = new Character("me");

	std::cout << *me;

	Enemy		*b = new RadScorpion();

	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << "-------------------my test---------------" << std::endl;
	SuperMutant		*c = new SuperMutant();
	Enemy			*d = new SuperMutant(*c);

	for (int i = 0; i < 10; i++)
	{
		me->recoverAP();
		me->attack(c);
	}

	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	delete d;
	delete pr;
	delete me;
	return (0);
}
