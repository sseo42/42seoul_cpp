/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:42:48 by sseo              #+#    #+#             */
/*   Updated: 2021/02/21 21:45:16 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int			main(void)
{
	FragTrap	my_frag("pinky");

	my_frag.rangedAttack("sseo");
	my_frag.meleeAttack("sung");
	my_frag.takeDamage(30);
	my_frag.beRepaired(20);
	my_frag.beRepaired(20);
	my_frag.beRepaired(20);
	my_frag.vaulthunter_dot_exe("test");
	my_frag.vaulthunter_dot_exe("test");
	my_frag.vaulthunter_dot_exe("test");
	my_frag.vaulthunter_dot_exe("test");
	my_frag.vaulthunter_dot_exe("test");

	FragTrap	my_frag2(my_frag);
	my_frag2.takeDamage(0);
	return (0);
}
