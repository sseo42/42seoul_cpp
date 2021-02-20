/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 19:54:32 by sseo              #+#    #+#             */
/*   Updated: 2021/02/17 17:46:43 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	name;
		Weapon	*wp;

		void	atk(void);
		void	change_wp(Weapon &wp_obj);

	public:
		HumanB(std::string name_str);
		void	setWeapon(Weapon &target);
		void	attack(void);
};

#endif
