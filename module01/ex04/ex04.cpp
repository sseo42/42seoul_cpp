/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:26:29 by sseo              #+#    #+#             */
/*   Updated: 2021/02/21 16:03:46 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

int			main(void)
{
	std::string		str;
	str = "HI THIS IS BRAIN";

	std::string		&reference = str;
	std::string		*pointer = &str;

	std::cout << std::setw(10) << "pointer:   " << &reference << reference << std::endl;
	std::cout << std::setw(10) << "reference: " << pointer << *pointer << std::endl;

	return (0);
}
