/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:12:19 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/19 10:39:00 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zmb;

    if (N == 0)
        return (NULL);
    if (!name.compare(""))
        name = "default";
	zmb = new Zombie[N];
    if (!zmb)
        return (NULL);
    for(int i = 0; i < N; i++)
    {
        zmb[i].setName(name + std::to_string(i));
        zmb[i].announce();
    }
    return (zmb);
}
