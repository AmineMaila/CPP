/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:40:21 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/21 12:41:01 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
public :
	Point();
	Point(float x, float y);
	Point& operator=(Point& punta);
	Point(const Point& punta);
	const Fixed getX( void ) const ;
	const Fixed getY( void ) const ;

	~Point();

private :
	Fixed const x;
	Fixed const y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif