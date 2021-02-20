/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:59:08 by sseo              #+#    #+#             */
/*   Updated: 2021/02/14 17:00:08 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"


Squad	*Squad::binary_search(int idx, int bit) const
{
	if (!bit)
		return ((Squad *)this);
	if (idx & bit)
		return (right->binary_search(idx, bit>>1));
	return (left->binary_search(idx, bit>>1));
}

Squad		*Squad::create_new(int idx, int bit)
{
	if (!bit)
		return (this);
	if (idx & bit)
	{
		if (!right)
			right = new Squad();
		return (right->create_new(idx, bit>>1));
	}
	if (!left)
		left = new Squad();
	return (left->create_new(idx, bit>>1));
}

void		Squad::inUnit(ISpaceMarine *obj)
{
	unit = obj;
}

Squad::Squad()
{
	cnt = 0;
	unit = 0;
	left = 0;
	right = 0;
}

Squad::~Squad()
{
	if (unit)
		delete unit;
	if (left)
		delete left;
	if (right)
		delete right;
}

Squad::Squad(Squad const &copy) : ISquad(copy)
{
	cnt = copy.getCount();
	if (copy.outUnit())
		unit = copy.outUnit()->clone();
	else
		unit = 0;
	if (copy.getLeft())
		left = new Squad(*copy.getLeft());
	else
		left = 0;
	if (copy.getRight())
		right = new Squad(*copy.getRight());
	else
		right = 0;
}

Squad const &Squad::operator = (Squad const &obj)
{
	if (this == &obj)
		return (*this);
	if (unit)
		delete unit;
	if (left)
		delete left;
	if (right)
		delete right;
	cnt = obj.getCount();
	if (obj.outUnit())
		unit = obj.outUnit()->clone();
	else
		unit = 0;
	if (obj.getLeft())
	{
		left = new Squad();
		*left = *obj.getLeft();
	}
	else
		left = 0;
	if (obj.getRight())
	{
		right = new Squad();
		*right = *obj.getRight();
	}
	else
		right = 0;
	return (*this);
}

Squad			*Squad::getLeft(void) const
{
	return (left);
}

Squad			*Squad::getRight(void) const
{
	return (right);
}

ISpaceMarine	*Squad::outUnit(void) const
{
	return (unit);
}

int			Squad::getCount(void) const
{
	return (cnt);
}

ISpaceMarine	*Squad::getUnit(int idx) const
{
	int		bit;
	Squad	*target;

	if (idx >= 0 && idx < cnt)
	{
		bit = 1;
		idx++;
		while ((bit << 1) <= idx)
			bit <<= 1;
		target = binary_search(idx, bit>>1);
		return (target->outUnit());
	}
	return (0);
}

int				Squad::push(ISpaceMarine *obj)
{
	int			bit;
	Squad	*target;

	cnt++;
	bit = 1;
	while ((bit << 1) <= cnt)
		bit <<= 1;
	target = create_new(cnt, bit>>1);
	target->inUnit(obj);
	return (cnt);
}
