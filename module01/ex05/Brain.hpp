/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:43:12 by sseo              #+#    #+#             */
/*   Updated: 2021/02/21 16:13:26 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <iomanip>

class		Brain
{
	private:
		std::string const base;

	public:
		Brain();
		std::string		identify(void) const;
};

#endif
