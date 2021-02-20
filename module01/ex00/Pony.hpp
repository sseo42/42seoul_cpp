/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 13:10:01 by sseo              #+#    #+#             */
/*   Updated: 2021/02/17 17:19:32 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class	Pony
{
	public:
		Pony();
		~Pony();
};

void		ponyOnTheHeap(void);
void		ponyOnTheStack(void);

#endif
