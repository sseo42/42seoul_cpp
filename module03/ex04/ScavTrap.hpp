/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:26:23 by sseo              #+#    #+#             */
/*   Updated: 2021/02/15 16:53:44 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>
# include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	private:
		std::string		challenge_pool[5];

	public:
		ScavTrap();
		ScavTrap( std::string name_str );
		~ScavTrap();
		ScavTrap(ScavTrap const &copy);
		ScavTrap const &operator = (ScavTrap const &obj);
		void	challengeNewcomer( void );
		std::string		get_challenge_str( int idx ) const;
		void			set_challenge( std::string str, int idx );
};

#endif
