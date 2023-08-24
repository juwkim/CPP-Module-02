/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:07:49 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/24 19:19:37 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):
	mRaw(0)
{
	// std::cout << "Default constructor called" << '\n';
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << '\n';
}

Fixed::Fixed(const Fixed& fixed)
{
	// std::cout << "Copy constructor called" << '\n';
	mRaw = fixed.mRaw;
}

Fixed::Fixed(const int raw)
{
	// std::cout << "Int constructor called" << '\n';
	mRaw = raw << mFractionalBits;
}

Fixed::Fixed(const float raw)
{
	// std::cout << "Float constructor called" << '\n';
	mRaw = roundf(raw * static_cast<float>(1 << mFractionalBits));
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	// std::cout << "Copy assignment operator called" << '\n';
	mRaw = fixed.mRaw;
	return *this;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << '\n';
	return mRaw;
}

void Fixed::setRawBits(int const raw)
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

bool Fixed::operator>(const Fixed &fixed) const
{
	return mRaw > fixed.mRaw;
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return mRaw < fixed.mRaw;
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return mRaw >= fixed.mRaw;
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return mRaw <= fixed.mRaw;
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return mRaw == fixed.mRaw;
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return mRaw != fixed.mRaw;
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	return Fixed(toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	return Fixed(toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	return Fixed(toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	return Fixed(toFloat() / fixed.toFloat());
}

Fixed& Fixed::operator++(void)
{
	++mRaw;
	return *this;
}

Fixed& Fixed::operator--(void)
{
	--mRaw;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(toFloat());

	++mRaw;
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(toFloat());

	--mRaw;
	return temp;
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs)
{
	return lhs > rhs ? lhs : rhs;
}

Fixed& Fixed::min(Fixed& lhs, Fixed& rhs)
{
	return lhs < rhs ? lhs : rhs;
}

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs)
{
	return lhs > rhs ? lhs : rhs;
}

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs)
{
	return lhs < rhs? lhs : rhs;
}
