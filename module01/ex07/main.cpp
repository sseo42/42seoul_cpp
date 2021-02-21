/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:23:46 by sseo              #+#    #+#             */
/*   Updated: 2021/02/21 16:29:57 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int			main(int argc, char *argv[])
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		file_name;
	std::string		str_buf;

	if (argc != 4)
	{
		std::cout << "need filename and 2 strings!!" << std::endl;
		return (0);
	}
	ifs.open(argv[1], std::ifstream::in);
	if (!ifs.is_open())
	{
		std::cerr << "error: can't open file" << std::endl;
		return (0);
	}
	std::getline(ifs, str_buf, '\0');
	ifs.close();
	if (ifs.bad())
	{
		std::cerr << "error: read failed" << std::endl;
		return (0);
	}
	file_name = argv[1];
	file_name += ".replace";
	replace_str(str_buf, argv[2], argv[3]);
	ofs.open(file_name.c_str());
	if (!ofs.is_open())
	{
		std::cerr << "error: can't create/open file" << std::endl;
		return (0);
	}
	ofs.write(str_buf.c_str(), str_buf.size());
	ofs.close();
	if (ofs.bad())
	{
		std::cerr << "error: writing failed" << std::endl;
	}
	return (0);
}
