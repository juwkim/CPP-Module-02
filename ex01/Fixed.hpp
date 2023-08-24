/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:07:30 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/24 17:38:44 by juwkim           ###   ########.fr       */
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

	private:
		int					mRaw;
		static const int	mFractionalBits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
