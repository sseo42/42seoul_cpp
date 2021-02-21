/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 20:34:24 by sseo              #+#    #+#             */
/*   Updated: 2021/02/21 19:32:44 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	val = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int raw_int )
{
	int				val_max;
	int				val_min;

	val_max = (1<<23) - 1;
	val_min = -val_max;
	if (raw_int > val_max)
		val = INT_MAX;
	else if (raw_int < val_min)
		val = INT_MIN;
	else
	{
		if (raw_int < 0)
		{
			val--;
			val = raw_int << fb;
			val |= INT_MIN;
		}
		else
		{
			val = raw_int << fb;
			val &= INT_MAX;
		}
	}
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float raw_float )
{
	int				cnt_shift;
	s_converter		converter;

	converter.num_float = raw_float;
	cnt_shift = converter.exponent - BIAS + fb - MANTISSA_BITS;
	val = 0;
	if (cnt_shift >= VAL_BITS - 1 - MANTISSA_BITS)
	{
		if (converter.s)
			val = INT_MIN;
		else
			val = INT_MAX;
	}
	else if (cnt_shift >= -MANTISSA_BITS)
	{
		val = converter.mantissa | 1<<MANTISSA_BITS;
		if (cnt_shift < 0)
		{
			cnt_shift = -cnt_shift;
			val >>= cnt_shift;
			if ((val & ((1<<cnt_shift) - 1)) >= 1<<(cnt_shift - 1))
				val++;
		}
		else
			val <<= cnt_shift;
		if (converter.s)
			val = -val;
	}
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed const &Fixed::operator = (Fixed const &obj)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &obj)
		return (*this);
	val = obj.getRawBits();
	return (*this);
}

int			Fixed::getRawBits() const
{
	return val;
}

void		Fixed::setRawBits( int const raw )
{
	val = raw;
}

float		Fixed::toFloat( void ) const
{
	int				tmp_val;
	unsigned int	point_idx = 0;
	s_converter		converter;

	if (val == INT_MAX || val == INT_MIN)
	{
		if (val == INT_MAX)
			converter.s = 0;
		else
			converter.s = 1;
		converter.exponent = (1<<EXPONENT_BITS) - 1;
		converter.mantissa = 0;
		return (converter.num_float);
	}
	else if (val == 0)
		return (0);
	else
	{
		if (val < 0)
			tmp_val = -val;
		else
			tmp_val = val;
		for (unsigned int i = 0; i < VAL_BITS - 1; i++)
		{
			if (tmp_val & (1<<i))
				point_idx = i;
		}
		if (val < 0)
			converter.s = 1;
		else
			converter.s = 0;
		converter.exponent = point_idx + BIAS - fb;
		tmp_val ^= 1<<point_idx;
		if (point_idx > MANTISSA_BITS)
			tmp_val >>= point_idx - MANTISSA_BITS;
		else
			tmp_val <<= MANTISSA_BITS - point_idx;
		converter.mantissa = tmp_val;
		return (converter.num_float);
	}
}

int			Fixed::toInt( void ) const
{
	int		abs_val;

	if (val == INT_MAX)
		return (INT_MAX);
	else if (val == INT_MIN)
		return (INT_MIN);
	if (val < 0)
	{
		abs_val = -val;
		if (abs_val % (1<<fb) >= (1<<(fb-1)))
			return (-(abs_val / (1<<fb)) - 1);
		else
			return (-(abs_val / (1<<fb)));
	}
	else
	{
		if (val % (1<<fb) >= (1<<(fb - 1)))
			return (val / (1<<fb) + 1);
		else
			return (val / (1<<fb));
	}
}

std::ostream &operator << (std::ostream &os, Fixed const &fx)
{
		os << fx.toFloat();
		return (os);
}
