/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:18:18 by irodrigo          #+#    #+#             */
/*   Updated: 2022/12/09 18:41:38 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <stdlib.h>

//  void prueba()
//  {
//  	system("leaks ex02");
//  }

int main()
{
	Animal* bishos[8];

	// atexit(prueba);
	std::cout << "Bichos creation" << std::endl;
	std::cout << "===============" << std::endl;
	for (int i = 0; i< 8; i++)
	{
		if (i % 2 == 0)
			bishos[i] = new Dog();
		else
			bishos[i] = new Cat();
		std::cout << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "get animal type for created elements" << std::endl;
	std::cout << "====================================" << std::endl;
	for (int i = 0; i< 8; i++)
	{
		bishos[i]->getType();
		bishos[i]->makeSound();
	}

	std::cout << std::endl;
	std::cout << "destroy created elements" << std::endl;
	std::cout << "=======================" << std::endl;
	for (int i = 0; i< 8; i++)
	{
		delete bishos[i];
	}

	// try copy constructor and equal overload
	std::cout << std::endl;
	std::cout << "creating cosa and prueba (copy of cosa)" << std::endl;
	std::cout << "=======================================" << std::endl;
	Animal* bisho = new Dog();
	
	Animal* prueba ( bisho );
	bisho->getType();
	prueba->getType();
	
	// try equal operator overload
	std::cout << std::endl;
	std::cout << "creating cosa and prueba (copy of cosa)" << std::endl;
	std::cout << "=======================================" << std::endl;
	Animal* prueba2 = bisho;
	prueba2->getType();
	prueba2->makeSound();

	std::cout << std::endl;
	std::cout << "deep copy (From Bisho2 to Bisho3)" << std::endl;
	std::cout << "=================================" << std::endl;
	
	Dog bicho2;
	Dog bicho3;

	bicho3 = bicho2;

	// deleting this elements
	std::cout << std::endl;
	std::cout << "deleting elements" << std::endl;
	std::cout << "=================" << std::endl;
	delete bisho;
}
