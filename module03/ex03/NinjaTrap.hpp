/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:50:27 by sseo              #+#    #+#             */
/*   Updated: 2021/02/15 17:23:46 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class		NinjaTrap: public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap( std::string name_str );
		~NinjaTrap();
		NinjaTrap( NinjaTrap const &copy);
		NinjaTrap const &operator = (NinjaTrap const &obj);
		void	ninjaShoebox(ClapTrap &target);
		void	ninjaShoebox(FragTrap &target);
		void	ninjaShoebox(ScavTrap &target);
		void	ninjaShoebox(NinjaTrap &target);
};

#endif
