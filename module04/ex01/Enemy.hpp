/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:13:05 by sseo              #+#    #+#             */
/*   Updated: 2021/02/13 13:50:59 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class		Enemy
{
	private:
		int			hit_points;
		std::string	type;

	public:
		Enemy(int hp_int, std::string const &type_str);
		virtual ~Enemy();
		Enemy(Enemy const &copy);
		Enemy const &operator = (Enemy const &obj);
		std::string		getType(void) const;
		int				getHP(void) const;
		void			setType(std::string type_str);
		void			setHP(int hp_int);

		virtual void	takeDamage(int dmg);
};

#endif
