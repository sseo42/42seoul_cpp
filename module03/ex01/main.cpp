/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:42:48 by sseo              #+#    #+#             */
/*   Updated: 2021/02/15 20:54:11 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int			main(void)
{
	ScavTrap	my_scav("pinky");

	my_scav.rangedAttack("sseo");
	my_scav.meleeAttack("sung");
	my_scav.takeDamage(30);
	my_scav.beRepaired(20);
	my_scav.challengeNewcomer();
	my_scav.challengeNewcomer();
	my_scav.challengeNewcomer();
	my_scav.challengeNewcomer();
	my_scav.challengeNewcomer();

	ScavTrap	my_scav2(my_scav);
	my_scav2.takeDamage(0);
	return (0);
}
