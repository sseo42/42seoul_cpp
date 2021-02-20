/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:51:54 by sseo              #+#    #+#             */
/*   Updated: 2021/02/14 17:10:38 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int			main(void)
{
	ISpaceMarine	*bob = new TacticalMarine;
	ISpaceMarine	*jim = new AssaultTerminator;

	ISquad			*vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine *cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << "--------------my test-----------------" << std::endl;

	TacticalMarine	*tester = new TacticalMarine;
	TacticalMarine	*tester2 = new TacticalMarine(*tester);
	AssaultTerminator	*tester3 = new AssaultTerminator;

	Squad			*my_squad = new Squad;

	my_squad->push(tester);
	my_squad->push(tester2);

	Squad			*test_sq = new Squad(*my_squad);
	Squad			*test_sq2 = new Squad;

	test_sq2->push(tester3); // he should die
	*test_sq2 = *test_sq;
	for (int i = 0; i < test_sq->getCount(); ++i)
	{
		ISpaceMarine *cur = test_sq->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete test_sq;

	for (int i = 0; i < test_sq2->getCount(); ++i)
	{
		ISpaceMarine *cur = test_sq2->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete test_sq2;

	delete my_squad;

	return (0);
}
