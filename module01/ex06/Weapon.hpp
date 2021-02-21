/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 11:53:45 by sseo              #+#    #+#             */
/*   Updated: 2021/02/21 16:20:41 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon
{
	private:
		std::string	type;

	public:
		Weapon(std::string	type_str);
		const std::string	&getType(void) const;
		void				setType(std::string type_str);
};

#endif
