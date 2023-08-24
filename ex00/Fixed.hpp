/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:07:30 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/24 17:38:46 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed& fixed);
		Fixed&	operator=(const Fixed& fixed);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					mRaw;
		static const int	mFractionalBits = 8;
};
