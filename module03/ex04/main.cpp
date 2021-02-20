/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:42:48 by sseo              #+#    #+#             */
/*   Updated: 2021/02/15 17:17:11 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int			main(void)
{
	std::cout << "-------------------test creation---------------" << std::endl;
	SuperTrap	my_super("tester");
	ClapTrap	my_clap("my clap");
	FragTrap	my_frag("my frag");
	ScavTrap	my_scav("my scav");
	NinjaTrap	my_ninja("my ninja");
	std::cout << std::endl;

	std::cout << "-------------------test atk--------------------" << std::endl;
	my_super.meleeAttack("first atk");
	my_super.rangedAttack("second atk");
	std::cout << std::endl;

	std::cout << "-------------------test ninja atk---------------" << std::endl;
	my_super.ninjaShoebox(my_clap);
	my_super.ninjaShoebox(my_frag);
	my_super.ninjaShoebox(my_scav);
	my_super.ninjaShoebox(my_ninja);
	std::cout << std::endl;

	std::cout << "-------------------test copy-------------------" << std::endl;
	SuperTrap	my_super2("tester2");

	my_super.setMeleeATK(200);
	my_super2 = my_super;

	my_super2.meleeAttack("dummy");
	std::cout << std::endl;

	std::cout << "-------------------test frag atk---------------" << std::endl;
	my_super2.vaulthunter_dot_exe("dummy");
	my_super2.vaulthunter_dot_exe("dummy");
	my_super2.vaulthunter_dot_exe("dummy");
	my_super2.vaulthunter_dot_exe("dummy");
	my_super2.vaulthunter_dot_exe("dummy");
	std::cout << std::endl;
	return (0);
}
