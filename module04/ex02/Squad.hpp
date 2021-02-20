/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:59:20 by sseo              #+#    #+#             */
/*   Updated: 2021/02/14 16:21:19 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class		Squad : public ISquad
{
	private:
		int				cnt;
		ISpaceMarine	*unit;
		Squad			*left;
		Squad			*right;

		Squad			*binary_search(int idx, int bit) const;
		Squad			*create_new(int idx, int bit);
		void			inUnit(ISpaceMarine *obj);

	public:
		Squad();
		~Squad();
		Squad(Squad const &copy);
		Squad const &operator = (Squad const &obj);
		Squad			*getLeft(void) const;
		Squad			*getRight(void) const;
		ISpaceMarine	*outUnit(void) const;
		int				getCount(void) const;
		ISpaceMarine	*getUnit(int idx) const;
		int				push(ISpaceMarine *obj);
};

#endif
