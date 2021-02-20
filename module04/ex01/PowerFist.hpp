/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 18:47:03 by sseo              #+#    #+#             */
/*   Updated: 2021/02/12 18:57:09 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class		PowerFist : public AWeapon
{
	public:
		PowerFist();
		~PowerFist();
		PowerFist(PowerFist const &copy);
		PowerFist const &operator = (PowerFist const &obj);
		void	attack(void) const;
};

#endif
