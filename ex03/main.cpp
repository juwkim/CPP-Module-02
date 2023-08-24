/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:30:39 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/24 19:24:23 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "bsp.hpp"

int	main(void)
{
	Point	a(0, 0);
	Point	b(10, 0);
	Point	c(10, 10);
	Point	p(9.5, 9);
	
	std::cout << "a: " << a << '\n';
	std::cout << "b: " << b << '\n';
	std::cout << "c: " << c << '\n';
	std::cout << "p: " << p << '\n';
	std::cout << "bsp: " << std::boolalpha << bsp(a, b, c, p) << '\n';
	return (0);
}
