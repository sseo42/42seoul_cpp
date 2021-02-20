/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:42:48 by sseo              #+#    #+#             */
/*   Updated: 2021/02/15 17:26:47 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int			main(void)
{
	std::cout << "-------------------test creation---------------" << std::endl;
	ClapTrap	my_clap("my clap");
	FragTrap	my_frag("my frag");
	ScavTrap	my_scav("my scav");
	NinjaTrap	my_ninja("my ninja");
	std::cout << std::endl;

	std::cout << "-------------------test atk--------------------" << std::endl;
	my_ninja.meleeAttack("first atk");
	my_ninja.rangedAttack("second atk");
	std::cout << std::endl;

	std::cout << "-------------------test ninja atk---------------" << std::endl;
	my_ninja.ninjaShoebox(my_clap);
	my_ninja.ninjaShoebox(my_frag);
	my_ninja.ninjaShoebox(my_scav);
	my_ninja.ninjaShoebox(my_ninja);
	std::cout << std::endl;

	std::cout << "-------------------test copy-------------------" << std::endl;
	my_ninja.setMeleeATK(1);
	NinjaTrap	my_ninja2(my_ninja);
	my_ninja2.meleeAttack("dummy");
	std::cout << std::endl;
	return (0);
}
