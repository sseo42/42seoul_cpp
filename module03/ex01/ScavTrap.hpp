/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:26:23 by sseo              #+#    #+#             */
/*   Updated: 2021/02/15 20:35:55 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>

class	ScavTrap
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

		std::string		challenge_pool[5];

	public:
		ScavTrap( std::string name_str );
		~ScavTrap();
		ScavTrap(ScavTrap const &copy);
		ScavTrap const &operator = (ScavTrap const &obj);

		void			rangedAttack( std::string const &target );
		void			meleeAttack( std::string const &target );
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );
		void			challengeNewcomer( void );

		std::string		get_challenge_str( int idx ) const;
		void			set_challenge( std::string str, int idx );

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
