/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 13:44:50 by sseo              #+#    #+#             */
/*   Updated: 2021/02/14 17:22:30 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class		Sorcerer
{
	private:
		std::string		name;
		std::string		title;

	public:
		Sorcerer(std::string name_str, std::string title_str);
		~Sorcerer();
		Sorcerer(Sorcerer const &obj);
		Sorcerer const &operator = (Sorcerer const &obj);
		void		polymorph(Victim const &target) const;
		std::string		getName(void) const;
		std::string		getTitle(void) const;
};

std::ostream &operator << (std::ostream &os, Sorcerer const &obj);

#endif
