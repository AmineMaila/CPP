/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:22:56 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/24 12:52:56 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;//should not create a leak
	delete i;

	Animal* animals[2];
	
	animals[0] = new Cat;

	animals[1] = new Dog;

	Cat c;
	Cat d;

	c.setBrain("meow");
	d.setBrain("bark");
	
	c = d;

	std::cout << c.getBrain() << std::endl;
	std::cout << d.getBrain() << std::endl;

	for(int i = 0; i < 3; i++)
	{
		std::cout << "C " << c.getBrain()->ideas[i] << std::endl;
		std::cout << "D " << d.getBrain()->ideas[i] << std::endl;
	}

	for (int i = 0; i < 2; i++)
		delete animals[i];

	return 0;
}
