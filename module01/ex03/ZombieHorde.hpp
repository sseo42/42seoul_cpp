/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 23:27:27 by sseo              #+#    #+#             */
/*   Updated: 2021/02/17 17:34:43 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include "Zombie.hpp"

class		ZombieHorde
{
	private:
		Zombie			*newbe;
		ZombieHorde		*next;
		void	all_announce();

	public:
		ZombieHorde(int N);
		~ZombieHorde();
		void	announce();
};

#endif
