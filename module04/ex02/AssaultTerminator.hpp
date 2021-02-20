/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 15:08:24 by sseo              #+#    #+#             */
/*   Updated: 2021/02/14 15:20:55 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class		AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		~AssaultTerminator();
		AssaultTerminator(AssaultTerminator const &copy);
		AssaultTerminator const &operator = (AssaultTerminator const &obj);
		ISpaceMarine	*clone(void) const;
		void			battleCry(void) const;
		void			rangedAttack(void) const;
		void			meleeAttack(void) const;
};

#endif
