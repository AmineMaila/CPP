/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:35:52 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/21 12:37:15 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point a(4, 12.5);
	Point b(11.5, 5);
	Point c(4, 5);

	Point x(8, 8);
	bsp(a, b, c, x) ? std::cout << "The point is inside the triangle" << std::endl : std::cout << "The point is NOT inside the triangle" << std::endl;
	
}