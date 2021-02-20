/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 00:59:13 by sseo              #+#    #+#             */
/*   Updated: 2021/02/16 01:42:31 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class		Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(Cure const &copy);
		Cure const &operator = (Cure const &obj);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif
