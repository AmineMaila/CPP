/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:40:19 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/21 12:40:40 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area(Point const a, Point const b, Point const c)
{
	return (((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY()))) * 0.5f);
}

Fixed abs(Fixed p)
{
	if (p < 0)
		return (p * -1);
	return (p);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed PAB = abs(area(point, a, b));
	Fixed PCA = abs(area(point, c, a));
	Fixed PBC = abs(area(point, b, c));

	if (PAB == 0 || PCA == 0 || PBC == 0)
		return (false);

	Fixed ABC = abs(area(a, b, c));

	if (ABC == PCA + PAB + PBC)
		return (true);
	return (false);
}