/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:12:04 by sseo              #+#    #+#             */
/*   Updated: 2021/02/22 14:35:20 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class		AWeapon
{
	private:
		AWeapon();
		std::string		name;
		int				apcost;
		int				damage;

	public:
		AWeapon(std::string const &name_str, int apcost_int, int damage_int);
		virtual ~AWeapon();
		AWeapon(AWeapon const &copy);
		AWeapon const &operator = (AWeapon const &ojb);
		std::string		getName(void) const;
		int				getAPCost(void) const;
		int				getDamage(void) const;
		void			setName(std::string name_str);
		void			setAPCost(int apcost_int);
		void			setDamage(int damage_int);
		virtual void	attack(void) const = 0;

};

#endif
