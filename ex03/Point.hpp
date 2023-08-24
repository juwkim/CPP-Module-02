/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:34:32 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/24 23:01:17 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		~Point(void);
		Point(const float x, const float y);
		Point(const Point &point);

		Point& operator=(const Point &point);

		float getX(void) const;
		float getY(void) const;
	private:
		const Fixed mX;
		const Fixed mY;
};

std::ostream& operator<<(std::ostream& out, const Point& point);
