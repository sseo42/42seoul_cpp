/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:48:36 by sseo              #+#    #+#             */
/*   Updated: 2021/02/22 14:32:49 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class		Peon : public Victim
{
	private:
		Peon();

	public:
		Peon(std::string name_str);
		~Peon();
		Peon(Peon const &copy);
		Peon const &operator = (Peon const &obj);
		void		getPolymorphed(void) const;
};

class		FakePeon : public Victim
{
	private:
		FakePeon();

	public:
		FakePeon(std::string name_str);
		~FakePeon();
		FakePeon(FakePeon const &copy);
		FakePeon const &operator = (FakePeon const &obj);
		void		getPolymorphed(void) const;
};


#endif
