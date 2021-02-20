/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:07:27 by sseo              #+#    #+#             */
/*   Updated: 2021/02/15 21:39:28 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int			main(void)
{
	int		n;

	std::cout << "put your number" << std::endl;
	std::cin >> n;
	while (std::cin.fail())
	{
		if (std::cin.eof())
			return (0);
		std::cin.clear();
		std::cin.ignore(100, '\n');
		std::cout << "I SAID NUMBER IDIOT!!!!" << std::endl;
		std::cin >> n;
	}

	std::cout << "-------creation start!!-------" << std::endl;
	ZombieHorde	*horde = new ZombieHorde(n);

	std::cout << "--------check announce--------" << std::endl;
	horde->announce();

	std::cout << "----------delete all----------" << std::endl;
	delete horde;

	std::cout << "-----------Thanks :)----------" << std::endl;
}
