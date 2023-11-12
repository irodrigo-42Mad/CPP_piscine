/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:41:20 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/16 10:39:57 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie( std::string name );

int main (void)
{
	Zombie *my_zombie[10];
	std::string s;

	std::cout << "\ncreating HEAP pointer element zombies\n" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		s = std::to_string(i + 1);
		my_zombie[i] = newZombie("Imperial Tropper_" + s); 
		if (!my_zombie[i])
			return (-1);
	}

	std::cout << "\ncreating STACK element zombies\n" << std::endl;
	randomChump("Yoda Master");
	randomChump("Obi One Kenobi");
	randomChump("C3Po");
	randomChump("R2D2");
	randomChump("Starkiller");

	std::cout << "\ndeleting HEAP pointer element zombies\n" << std::endl;

	for (int i = 0; i < 10; i++)
		delete (my_zombie[i]);

	return (0);
}
