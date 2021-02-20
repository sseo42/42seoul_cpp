/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:42:48 by sseo              #+#    #+#             */
/*   Updated: 2021/02/15 17:29:28 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int			main(void)
{
	std::cout << "-------------------test creation---------------" << std::endl;
	FragTrap	my_frag("my frag");
	ScavTrap	my_scav("my scav");
	std::cout << std::endl;

	return (0);
}
