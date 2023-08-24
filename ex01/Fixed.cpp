/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:07:49 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/24 23:00:04 by juwkim           ###   ########.fr       */
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

Fixed::Fixed(const int raw)
{
	std::cout << "const intructor called" << '\n';
	mRaw = raw << mFractionalBits;
}

Fixed::Fixed(const float raw)
{
	std::cout << "Float constructor called" << '\n';
	mRaw = roundf(raw * static_cast<float>(1 << mFractionalBits));
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

void Fixed::setRawBits(const int raw)
{
	mRaw = raw;
}

int	 Fixed::toInt(void) const
{
	return mRaw >> mFractionalBits;
}

float Fixed::toFloat(void) const
{
	return mRaw / static_cast<float>(1 << mFractionalBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

