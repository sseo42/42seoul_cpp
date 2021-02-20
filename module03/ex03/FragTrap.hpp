/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:52:12 by sseo              #+#    #+#             */
/*   Updated: 2021/02/15 16:48:10 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>
# include "ClapTrap.hpp"

class	FragTrap: virtual public ClapTrap
{
	private:
		std::string		verb_str_pool[5];
		unsigned int	dmg_pool[5];

	public:
		FragTrap();
		FragTrap( std::string name_str );
		~FragTrap();
		FragTrap(FragTrap const &copy);
		FragTrap const &operator = (FragTrap const &obj);
		void	vaulthunter_dot_exe( std::string const &target );
		std::string		get_verb( int idx ) const;
		unsigned int	get_dmg( int idx ) const;
		void			set_verb_pool(std::string verb_str, int idx);
		void			set_dmg_pool(unsigned int dmg_uint, int idx);
};

#endif
