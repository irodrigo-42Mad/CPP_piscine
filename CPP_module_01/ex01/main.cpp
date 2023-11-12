/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:12:19 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/05 13:43:29 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie *my_horde;
	int n;
	std::string name;

	std::cout << "How many elements put in this HORDE: ";
	std::cin >> n;
	std::cout << "what's the name for this HORDE: ";
	std::cin >> name;
	std::cout << "creating Zombie HORDE" << std::endl;
	my_horde = zombieHorde(n, name);
	if (!my_horde)
		return(-1);
	delete []my_horde;
	return (0);
}
