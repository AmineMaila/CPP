/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:08:51 by mmaila            #+#    #+#             */
/*   Updated: 2024/06/02 20:39:38 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Replace.hpp"

int main(int ac, char *av[])
{
    if (ac != 4)
    {
        std::cout << "invalid arguments!" << std::endl;
        return (1);
    }
    try
    {
        Replace files(av[1]);
        files.replace(av[2], av[3]);
    }
    catch (std::runtime_error &err)
    {
        std::cerr << "Exception caught : " << err.what() << std::endl;
    }
}