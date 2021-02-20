/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 22:13:38 by sseo              #+#    #+#             */
/*   Updated: 2021/02/07 16:16:53 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int				main(void)
{
	Weapon		club = Weapon("crude spiked club");
	Weapon		club2 = Weapon("crude spiked club");

	HumanA		bob("Bob", club);

	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	std::cout << "----------------------------------------" << std::endl;

	HumanB		jim("jim");

	jim.setWeapon(club2);
	jim.attack();
	club2.setType("some other type of club");
	jim.attack();
	return (0);
}
