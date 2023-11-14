/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:33:10 by irodrigo          #+#    #+#             */
/*   Updated: 2022/11/24 14:22:21 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	Animal* peta = new Animal("Serpiente");
	std::cout << peta->getType() << " " << std::endl;
	peta->setType("Tortuga");
	std::cout << peta->getType() << " " << std::endl;
	//.... hay que hacer los elementos que piden
	const WrongAnimal* Erbisho = new WrongAnimal();
	const WrongCat* UysErgato = new WrongCat();
	std::cout << Erbisho->getType() << std::endl;
	std::cout << UysErgato->getType() << std::endl;
	Erbisho->makeSound();
	UysErgato->makeSound();
}
