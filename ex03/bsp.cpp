/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSP.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:49:01 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/24 19:24:17 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

static float area(const Point& p1, const Point& p2, const Point& p);

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	if (area(a, b, c) * area(a, b, point) <= 0)
		return false;
	if (area(b, c, a) * area(b, c, point) <= 0)
		return false;
	if (area(c, a, b) * area(c, a, point) <= 0)
		return false;
	return true;
}

static float area(const Point& p1, const Point& p2, const Point& p)
{
	return (p.getX() - p1.getX()) * (p1.getY() - p2.getY()) - \
			(p.getY() - p1.getY()) * (p1.getX() - p2.getX());
}
