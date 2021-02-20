/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 20:13:56 by sseo              #+#    #+#             */
/*   Updated: 2021/02/17 17:21:40 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class		Zombie
{
	private:
		std::string	name;
		std::string	type;


	public:
		Zombie(std::string name_str, std::string type_str);
		~Zombie();
		void	announce();
};

#endif
