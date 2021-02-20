/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 00:42:04 by sseo              #+#    #+#             */
/*   Updated: 2021/02/16 01:47:51 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class		Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(Ice const &copy);
		Ice const &operator = (Ice const &obj);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif
