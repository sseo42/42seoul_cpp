/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:48:36 by sseo              #+#    #+#             */
/*   Updated: 2021/02/12 17:48:54 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class		Peon : public Victim
{
	public:
		Peon(std::string name_str);
		~Peon();
		Peon(Peon const &obj);
		Peon const &operator = (Peon const &obj);
		void		getPolymorphed(void) const;
};

#endif
