/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:36:57 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/24 23:26:20 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): mX(0), mY(0) {}
Point::~Point(void){}
Point::Point(const float a, const float b): mX(Fixed(a)), mY(Fixed(b)) { }
Point::Point(const Point& point): mX(point.mX), mY(point.mY) { }

Point& Point::operator=(const Point& point)
{
	this->~Point();
    new (this) Point(point);
	return *this;
}

float Point::getX(void) const
{
	return mX.toFloat();
}

float Point::getY(void) const
{
	return mY.toFloat();
}

std::ostream& operator<<(std::ostream& out, const Point& point)
{
	out << "( " << point.getX() << ", " << point.getY() << " )";
	return out;
}
