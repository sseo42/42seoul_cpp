/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 21:01:15 by sseo              #+#    #+#             */
/*   Updated: 2021/02/15 17:13:58 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"


class		SuperTrap: public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(std::string name_str);
		~SuperTrap();
		SuperTrap(SuperTrap const &copy);
		SuperTrap const &operator = (SuperTrap const &obj);
};

#endif
