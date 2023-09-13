/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:03:14 by irodrigo          #+#    #+#             */
/*   Updated: 2023/09/08 13:05:55 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.hpp"


int main (int argc, char** argv)
{
	server irc(4242,"0.0.0.0", "");

	while (1)
		std::cout << "hola que hase" << std::endl;	

	return (0); // normal exiting
}	