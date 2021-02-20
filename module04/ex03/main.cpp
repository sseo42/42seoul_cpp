/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 01:33:39 by sseo              #+#    #+#             */
/*   Updated: 2021/02/16 02:15:55 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << "--------------test---------------" << std::endl;

	Character* tester = new Character("tester");
	IMateriaSource* s = new MateriaSource();
	s->learnMateria(new Ice());
	s->learnMateria(new Cure());

	AMateria* t;
	t = s->createMateria("ice");
	tester->equip(t);
	t = s->createMateria("cure");
	tester->equip(t);
	t = s->createMateria("ice");
	tester->equip(t);
	t = s->createMateria("cure");
	tester->equip(t);
	t = s->createMateria("ice");
	tester->equip(t);
	tester->unequip(3);
	tester->unequip(3);

	ICharacter* tester2 = new Character(*tester);
	tester2->use(0, *tester);
	tester2->use(1, *tester);
	tester2->use(2, *tester);
	tester2->use(3, *tester);

	delete tester;
	delete tester2;
	delete s;
	delete t;

	return 0;
}
