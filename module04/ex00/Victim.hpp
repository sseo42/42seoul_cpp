/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:34:20 by sseo              #+#    #+#             */
/*   Updated: 2021/02/22 14:10:44 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class		Victim
{
	private:
		Victim();
		std::string		name;

	public:
		Victim(std::string name_str);
		~Victim();
		Victim(Victim const &obj);
		Victim const &operator = (Victim const &obj);
		virtual void	getPolymorphed(void) const;
		std::string		getName(void) const;
		void			setName(std::string name_str);
};

std::ostream &operator << (std::ostream &os, Victim const &obj);

#endif
