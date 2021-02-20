/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:59:48 by sseo              #+#    #+#             */
/*   Updated: 2021/02/13 14:02:36 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class		RadScorpion : public Enemy
{
	public:
		RadScorpion();
		~RadScorpion();
		RadScorpion(RadScorpion const &copy);
		RadScorpion const &operator = (RadScorpion const &obj);
};

#endif
