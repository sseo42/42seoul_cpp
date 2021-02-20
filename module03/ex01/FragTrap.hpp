/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:52:12 by sseo              #+#    #+#             */
/*   Updated: 2021/02/15 20:49:12 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>

class	FragTrap
{
	private:
		std::string		name;
		unsigned int	max_hit_points;
		unsigned int	max_energy_points;
		unsigned int	melee_attack_damage;
		unsigned int	ranged_attack_damage;
		unsigned int	armor_damage_reduction;
		unsigned int	level;
		unsigned int	hit_points;
		unsigned int	energy_points;

		std::string		verb_str_pool[5];
		unsigned int	dmg_pool[5];

	public:
		FragTrap( std::string name_str );
		~FragTrap();
		FragTrap(FragTrap const &copy);
		FragTrap const &operator = (FragTrap const &obj);

		void			rangedAttack( std::string const &target );
		void			meleeAttack( std::string const &target );
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );
		void			vaulthunter_dot_exe( std::string const &target );

		std::string		get_verb( int idx ) const;
		unsigned int	get_dmg( int idx ) const;
		void			set_verb_pool(std::string verb_str, int idx);
		void			set_dmg_pool(unsigned int dmg_uint, int idx);

		std::string		getName(void) const;
		unsigned int	getMaxHP(void) const;
		unsigned int	getMaxEP(void) const;
		unsigned int	getMeleeATK(void) const;
		unsigned int	getRangedATK(void) const;
		unsigned int	getArmor(void) const;
		unsigned int	getLVL(void) const;
		unsigned int	getHP(void) const;
		unsigned int	getEP(void) const;

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
