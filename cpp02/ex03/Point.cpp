/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:40:34 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/21 12:40:28 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::~Point() {}

Point::Point() : x(0), y(0) {}

Point::Point(float x, float y) : x(x), y(y) {}

Point::Point(const Point& punta) : x(punta.x), y(punta.y) {}

Point& Point::operator=(Point& punta)
{
	if (this != &punta)
	{
		(Fixed) this->x = punta.x;
		(Fixed) this->y = punta.x;
	}
	return (*this);
}

const Fixed Point::getX( void ) const
{
	return (this->x);
}

const Fixed Point::getY( void ) const
{
	return (this->y);
}
