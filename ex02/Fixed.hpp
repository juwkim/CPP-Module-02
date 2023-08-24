/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:07:30 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/24 18:30:45 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed& fixed);
		Fixed(const int raw);
		Fixed(const float raw);

		Fixed&	operator=(const Fixed& fixed);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

		bool	operator>(const Fixed &fixed) const;
		bool	operator<(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator==(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;

		Fixed	operator+(const Fixed &fixed) const;
		Fixed	operator-(const Fixed &fixed) const;
		Fixed	operator*(const Fixed &fixed) const;
		Fixed	operator/(const Fixed &fixed) const;

		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
	
		static Fixed&		max(Fixed& lhs, Fixed& rhs);
		static Fixed&		min(Fixed& lhs, Fixed& rhs);
		static const Fixed&	max(const Fixed& lhs, const Fixed& rhs);
		static const Fixed&	min(const Fixed& lhs, const Fixed& rhs);

	private:
		int					mRaw;
		static const int	mFractionalBits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
