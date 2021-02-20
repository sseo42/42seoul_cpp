/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 19:56:40 by sseo              #+#    #+#             */
/*   Updated: 2021/02/04 20:01:56 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void			memoryLeak()
{
	std::string		*panther = new std::string("String pather");

	std::cout << *panther << std::endl;
	delete panther;
}
