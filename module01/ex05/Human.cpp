/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:43:34 by sseo              #+#    #+#             */
/*   Updated: 2021/02/15 21:47:24 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain			&Human::getBrain(void)
{
	return (my_brain);
}

std::string		Human::identify(void)
{
	return (my_brain.identify());
}
