/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 12:32:37 by sseo              #+#    #+#             */
/*   Updated: 2021/02/17 17:46:28 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string		name;
		const Weapon	&wp;

		void	atk(void);

	public:
		HumanA(std::string name_str, const Weapon &wp_obj);
		void	attack(void);
};

#endif
