/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 14:45:27 by sseo              #+#    #+#             */
/*   Updated: 2021/02/14 15:04:14 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class		TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		~TacticalMarine();
		TacticalMarine(TacticalMarine const &copy);
		TacticalMarine const &operator = (TacticalMarine const &obj);
		ISpaceMarine	*clone(void) const;
		void			battleCry(void) const;
		void			rangedAttack(void) const;
		void			meleeAttack(void) const;
};

#endif
