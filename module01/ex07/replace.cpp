/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:58:57 by sseo              #+#    #+#             */
/*   Updated: 2021/02/21 16:29:46 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void		replace_str(std::string &line, char *src, char *des)
{
	size_t		idx = 0;
	size_t		src_len = 0, des_len = 0;

	while (src[src_len])
		src_len++;
	while (des[des_len])
		des_len++;
	idx = line.find(src, idx);
	while (idx != std::string::npos)
	{
		line.replace(idx, src_len, des);
		idx += des_len;
		idx = line.find(src, idx);
	}
}
