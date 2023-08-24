/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:30:39 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/24 19:16:23 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	Fixed 		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << '\n';
	std::cout << ++a << '\n';
	std::cout << a << '\n';
	std::cout << a++ << '\n';
	std::cout << a << '\n';

	std::cout << b << '\n';

	std::cout << Fixed::max(a, b) << '\n';

	return 0;
}
