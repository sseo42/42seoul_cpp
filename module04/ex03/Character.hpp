/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 18:40:33 by sseo              #+#    #+#             */
/*   Updated: 2021/02/16 01:56:16 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class		Character : public ICharacter
{
	private:
		static const int	max_slot = 4;
		std::string			_name;
		AMateria			*inventory[max_slot];

	public:
		Character(std::string const &name);
		~Character();
		Character(Character const &copy);
		Character const &operator = (Character const &obj);

		std::string const	&getName(void) const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);

		AMateria			*getItem(int idx) const;
};

#endif
