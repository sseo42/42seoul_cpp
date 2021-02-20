/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:43:04 by sseo              #+#    #+#             */
/*   Updated: 2021/02/17 17:38:31 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	base = "0123456789ABCDEF";
}

std::string		Brain::identify(void)
{
	size_t			addr, tmp, cnt;
	std::string		addr_str;

	addr = (size_t)this;
	tmp = addr;
	cnt = 2;
	while (tmp)
	{
		cnt++;
		tmp /= 16;
	}
	addr_str.resize(cnt);
	if (!addr)
		addr_str[2] = '0';
	while (addr)
	{
		cnt--;
		addr_str[cnt] = base[addr % 16];
		addr /= 16;
	}
	addr_str[0] = '0';
	addr_str[1] = 'x';
	return (addr_str);
}
