/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:26:58 by irodrigo          #+#    #+#             */
/*   Updated: 2023/06/26 13:23:35 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main (int argc, char **argv)
{
	std::string myfile;
	std::string linea;
	
	if (argc != 2)
	{
		std::cerr << "Incorrect parameter number" << std::endl;
		exit (1);
	}
	BitcoinExchange mybtc;
	// loading data files
	mybtc.fileDataLoad(argv[1]);
	return (0);
	// hay que tener en cuenta que los mensajes de error solamente deberán aparecer en una única ocasión.
}
