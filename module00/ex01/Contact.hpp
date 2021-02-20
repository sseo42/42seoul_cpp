/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:00:21 by sseo              #+#    #+#             */
/*   Updated: 2021/02/17 17:17:59 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>

class	Contact
{
	private:
		std::string		information[11];

		int		read_info(std::string msg, int idx);
		void	show_info(int start, int end);
		void	show_target_info(std::string msg, int idx);

	public:
		Contact();
		bool	is_filled_up;
		int		add(void);
		void	show_sample(int);
		void	show_all(void);
};

#endif
