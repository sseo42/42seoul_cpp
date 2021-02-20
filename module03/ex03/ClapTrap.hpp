/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:51:07 by sseo              #+#    #+#             */
/*   Updated: 2021/02/15 16:40:24 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class		ClapTrap
{
	private:
		std::string		type;
		std::string		name;
		unsigned int	max_hit_points;
		unsigned int	max_energy_points;
		unsigned int	melee_attack_damage;
		unsigned int	ranged_attack_damage;
		unsigned int	armor_damage_reduction;
		unsigned int	level;
		unsigned int	hit_points;
		unsigned int	energy_points;

	public:
		ClapTrap();
		ClapTrap(std::string name_str);
		ClapTrap(ClapTrap const &copy);
		ClapTrap const &operator = (ClapTrap const &obj);
		virtual ~ClapTrap();
		void			rangedAttack( std::string const &target );
		void			meleeAttack( std::string const &target );
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );

		std::string		getType(void) const;
		std::string		getName(void) const;
		unsigned int	getMaxHP(void) const;
		unsigned int	getMaxEP(void) const;
		unsigned int	getMeleeATK(void) const;
		unsigned int	getRangedATK(void) const;
		unsigned int	getArmor(void) const;
		unsigned int	getLVL(void) const;
		unsigned int	getHP(void) const;
		unsigned int	getEP(void) const;

		void			setType(std::string const &target);
		void			setName(std::string const &target);
		void			setMaxHP(unsigned int val);
		void			setMaxEP(unsigned int val);
		void			setMeleeATK(unsigned int val);
		void			setRangedATK(unsigned int val);
		void			setArmor(unsigned int val);
		void			setLVL(unsigned int val);
		void			setHP(unsigned int val);
		void			setEP(unsigned int val);
};

#endif
