/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:11:48 by sseo              #+#    #+#             */
/*   Updated: 2021/02/17 17:17:45 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Contact::Contact()
{
	is_filled_up = false;
}

int		Contact::read_info(std::string msg, int idx)
{
	if (idx > 10)
		return (2);
	std::cout << "\n" << msg << ": ";
	std::getline (std::cin, information[idx]);
	if (std::cin.eof())
		return (1);
	else if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(100, '\n');
		return (this->read_info(msg, idx));
	}
	return (0);
}

void	Contact::show_info(int start, int end)
{
	for (int i = start; i < end; i++)
	{
		std::cout << "|";
		if (information[i].length() <= 10)
			std::cout << std::setw(10) << std::setfill(' ') << std::setiosflags (std::ios::right) << information[i];
		else
		{
			std::cout << information[i].substr(0, 9);
			std::cout << ".";
		}
	}
	std::cout << std::endl;
}

void	Contact::show_target_info(std::string msg, int idx)
{
	std::cout << msg << ": ";
	std::cout << information[idx] << std::endl;
}

int		Contact::add(void)
{
	std::cin.ignore(100, '\n');
	if (read_info("first name", 0))
		return (1);
	if (read_info("last name", 1))
		return (1);
	if (read_info("nickname", 2))
		return (1);
	if (read_info("login", 3))
		return (1);
	if (read_info("postal address", 4))
		return (1);
	if (read_info("email address", 5))
		return (1);
	if (read_info("phone number", 6))
		return (1);
	if (read_info("birthday date", 7))
		return (1);
	if (read_info("favorite meal", 8))
		return (1);
	if (read_info("underwear color", 9))
		return (1);
	if (read_info("darkest secret", 10))
		return (1);
	is_filled_up = true;
	return (0);
}

void	Contact::show_sample(int idx)
{
	std::cout << std::setw(10) << std::setiosflags (std::ios::right) << idx;
	show_info(0, 3);
}

void	Contact::show_all(void)
{
	show_target_info("first name", 0);
	show_target_info("last name", 1);
	show_target_info("nickname", 2);
	show_target_info("login", 3);
	show_target_info("postal address", 4);
	show_target_info("email address", 5);
	show_target_info("phone number", 6);
	show_target_info("birthday date", 7);
	show_target_info("favorite meal", 8);
	show_target_info("underwear color", 9);
	show_target_info("darkest secret", 10);
}
