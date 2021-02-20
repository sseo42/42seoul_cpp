/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 19:55:27 by sseo              #+#    #+#             */
/*   Updated: 2021/02/15 21:04:53 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int					val;
		static const int	fb = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &copy);
		Fixed const &operator = (Fixed const &obj);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
