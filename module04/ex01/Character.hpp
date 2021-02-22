/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 14:08:31 by sseo              #+#    #+#             */
/*   Updated: 2021/02/22 15:03:18 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# define MAX_AP 40

# include "AWeapon.hpp"
# include "Enemy.hpp"

class		Character
{
	private:
		Character();
		std::string		name;
		int				ap;
		AWeapon			*wp_p;

	public:
		Character(std::string const &name_str);
		~Character();
		Character(Character const &copy);
		Character const &operator = (Character const &obj);
		void		recoverAP(void);
		void		equip(AWeapon *wp_pointer);
		void		attack(Enemy *enemy_pointer);
		std::string	getName(void) const;
		int			getAP(void) const;
		AWeapon		*getWP(void) const;
};

std::ostream &operator << (std::ostream &os, Character const &obj);

#endif
