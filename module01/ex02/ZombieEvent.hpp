/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 20:12:50 by sseo              #+#    #+#             */
/*   Updated: 2021/02/17 17:28:07 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

class		ZombieEvent
{
	private:
		std::string	type;

	public:
		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
		Zombie	*randomChump();
};

#endif
