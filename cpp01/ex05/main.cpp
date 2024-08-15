/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:26:03 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/12 15:48:22 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    std::string line;
    Harl        harl2;

    while (!std::cin.eof())
    {
        std::cout << "Harl : ";
        std::getline(std::cin, line);
        harl2.complain(line);
    }
}