/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:29:27 by mmaila            #+#    #+#             */
/*   Updated: 2024/05/31 18:48:21 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include <string>

int main()
{
	std::string var = "HI THIS IS BRAIN";
	std::string *stringPTR = &var;
	std::string &stringREF = var;

	std::cout << &var << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << var << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}