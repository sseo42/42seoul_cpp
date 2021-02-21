/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:43:47 by sseo              #+#    #+#             */
/*   Updated: 2021/02/21 16:11:11 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class		Human
{
	private:
		const Brain		my_brain;

	public:
		Brain const	&getBrain(void) const;
		std::string	identify(void);
};

#endif
