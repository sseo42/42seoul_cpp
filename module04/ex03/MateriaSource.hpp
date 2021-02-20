/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 23:38:52 by sseo              #+#    #+#             */
/*   Updated: 2021/02/16 00:27:06 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class		MateriaSource : public IMateriaSource
{
	private:
		static const int	max_src = 4;
		int					cnt_src;
		AMateria			*source[max_src];

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &copy);
		MateriaSource const &operator = (MateriaSource const &obj);

		void		learnMateria(AMateria *src);
		AMateria	*createMateria(std::string const &type);

		int			get_cnt(void) const;
		AMateria	*get_src(int idx) const;
		/*
		void		set_cnt(int val);
		void		set_src(int idx, AMateria *obj);
		*/
};

#endif
