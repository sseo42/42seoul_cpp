/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:16:25 by sseo              #+#    #+#             */
/*   Updated: 2021/02/22 15:22:30 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::Enemy(int hp_int, std::string const &type_str)
{
	hit_points = hp_int;
	type = type_str;
	std::cout << type << ": Enemy obj created" << std::endl;
}

Enemy::~Enemy()
{
	std::cout << type << ": Enemy obj deleted" << std::endl;
}

Enemy::Enemy(Enemy const &copy)
{
	hit_points = copy.getHP();
	type = copy.getType();
}

Enemy const &Enemy::operator = (Enemy const &obj)
{
	if (this == &obj)
		return (*this);
	hit_points = obj.getHP();
	type = obj.getType();
	return (*this);
}

std::string		Enemy::getType(void) const
{
	return (type);
}

int				Enemy::getHP(void) const
{
	return (hit_points);
}

void			Enemy::setType(std::string type_str)
{
	type = type_str;
}

void			Enemy::setHP(int hp_int)
{
	hit_points = hp_int;
}

void			Enemy::takeDamage(int dmg)
{
	if (dmg > 0)
		hit_points -= dmg;
	if (hit_points < 0)
		hit_points = 0;
}
