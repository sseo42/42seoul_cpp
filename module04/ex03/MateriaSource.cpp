/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 23:52:24 by sseo              #+#    #+#             */
/*   Updated: 2021/02/16 01:42:08 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	cnt_src = 0;
	for (int i = 0; i < max_src; i++)
		source[i] = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < max_src; i++)
	{
		if (source[i])
			delete source[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	cnt_src = copy.get_cnt();
	for (int i = 0; i < max_src; i++)
		source[i] = copy.get_src(i)->clone();
}

MateriaSource const &MateriaSource::operator = (MateriaSource const &obj)
{
	cnt_src = obj.get_cnt();
	for (int i = 0; i < max_src; i++)
	{
		if (source[i])
			delete source[i];
		source[i] = obj.get_src(i)->clone();
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *src)
{
	if (cnt_src < max_src)
	{
		source[cnt_src] = src;
		cnt_src++;
	}
	else
		std::cout << "full..." << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < cnt_src; i++)
	{
		if (source[i]->getType() == type)
			return (source[i]->clone());
	}
	return (0);
}

int			MateriaSource::get_cnt(void) const
{
	return (cnt_src);
}

AMateria	*MateriaSource::get_src(int idx) const
{
	return (source[idx]);
}
