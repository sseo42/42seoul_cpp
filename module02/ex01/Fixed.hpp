/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 19:55:27 by sseo              #+#    #+#             */
/*   Updated: 2021/02/21 19:31:32 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

#ifndef INT_MAX
# define INT_MAX 2147483647
#endif
#ifndef INT_MIN
# define INT_MIN -2147483648
#endif
# define MANTISSA_BITS 23
# define EXPONENT_BITS 8
# define BIAS 127
# define VAL_BITS 32

struct	s_converter
{
	union
	{
		struct
		{
			unsigned int mantissa : MANTISSA_BITS;
			unsigned int exponent : EXPONENT_BITS;
			unsigned int s : 1;
		};
		float	num_float;
	};
};

class	Fixed
{
	private:
		int					val;
		static const int	fb = 8;

	public:
		Fixed();
		Fixed( const int raw_int );
		Fixed( const float raw_float );
		~Fixed();
		Fixed(Fixed const &copy);
		Fixed const &operator = (Fixed const &obj);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream &operator << (std::ostream &os, Fixed const &fx);

#endif
