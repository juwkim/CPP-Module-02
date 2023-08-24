/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:07:49 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/24 17:48:59 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):
	mRaw(0)
{
	std::cout << "Default constructor called" << '\n';
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << '\n';
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << '\n';
	mRaw = fixed.mRaw;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << '\n';
	mRaw = fixed.mRaw;
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << '\n';
	return mRaw;
}

void Fixed::setRawBits(int const raw)
{
	mRaw = raw;
}
