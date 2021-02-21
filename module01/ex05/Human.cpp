/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:43:34 by sseo              #+#    #+#             */
/*   Updated: 2021/02/21 16:11:36 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain const &Human::getBrain(void) const
{
	return (my_brain);
}

std::string		Human::identify(void)
{
	return (my_brain.identify());
}
