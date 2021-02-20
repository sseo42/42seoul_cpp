/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 19:50:26 by sseo              #+#    #+#             */
/*   Updated: 2021/02/17 17:13:41 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				main(void)
{
	Contact		contact_book[8];
	std::string	cmd;
	int			idx;
	int			tmp;

	idx = 0;
	while (1)
	{
		std::cout << "put your command\n";
		std::cin >> cmd;
		if (std::cin.eof() || !cmd.compare("EXIT"))
			break ;
		else if (!cmd.compare("ADD"))
		{
			if (idx > 7)
			{
				for (int i = 0; i < 8; i++)
					contact_book[i].show_sample(i);
				std::cout << "put the index where you want to overwrite\n";
				std::cin >> tmp;
				while (std::cin.fail())
				{
					if (std::cin.eof())
						return (0);
					std::cin.clear();
					std::cin.ignore(100, '\n');
					std::cout << "wrong input. try again\n";
					std::cin >> tmp;
				}
				if (contact_book[tmp].add())
					return (0);
			}
			else
			{
				if (contact_book[idx].add())
					return (0);
				idx++;
			}
		}
		else if (!cmd.compare("SEARCH"))
		{
			std::cout << std::setw(10) << std::setiosflags (std::ios::right) << "index";
			std::cout << "|" << std::setw(10) << std::setiosflags (std::ios::right) << "first name";
			std::cout << "|" << std::setw(10) << std::setiosflags (std::ios::right) << "last name";
			std::cout << "|" << std::setw(10) << std::setiosflags (std::ios::right) << "nickname" << std::endl;
			for (int i = 0; i < idx; i++)
				contact_book[i].show_sample(i);
			std::cout << "put the index to see the details\n";
			std::cin >> tmp;
			while (std::cin.fail() || tmp >= idx)
			{
				if (std::cin.eof())
					return (0);
				std::cin.clear();
				std::cin.ignore(100, '\n');
				std::cout << "wrong input. try again\n";
				std::cin >> tmp;
			}
			contact_book[tmp].show_all();
		}
		std::cout << "--------------------------------------------" << std::endl;
	}
	return (0);
}
