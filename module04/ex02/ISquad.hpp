/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:47:05 by sseo              #+#    #+#             */
/*   Updated: 2021/02/14 14:20:10 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class		ISquad
{
	public:
		virtual	~ISquad() {}
		virtual int	getCount() const = 0;
		virtual ISpaceMarine	*getUnit( int idx ) const = 0;
		virtual int	push( ISpaceMarine *obj ) = 0;
};

#endif
