/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 18:26:18 by sseo              #+#    #+#             */
/*   Updated: 2021/02/16 02:00:20 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class		ICharacter;

class		AMateria
{
	private:
		std::string		_type;
		unsigned int	_xp;

	public:
		AMateria(std::string const &type);
		//AMateria();
		virtual ~AMateria();
		AMateria(AMateria const &copy);
		AMateria const &operator = (AMateria const &obj);

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);

		std::string const	&getType() const;
		unsigned int		getXP() const;
		void				setXP(unsigned int xp);
		/*
		void				setType(std::string const &type);
		*/
};

#endif
