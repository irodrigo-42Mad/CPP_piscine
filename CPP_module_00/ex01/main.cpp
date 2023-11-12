/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:18:55 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/14 13:56:07 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/**
 * main function of dietary class
 * 
 * PARAMETERS
 *     IN: no parameters required
 * 
 * 	   OUT: int value 0 if correct
 * 
 **/

int	main(void)
{
	Dietary dietary;
	std::string cmd;

	do
	{
		system("clear");
		dietary.info_message();
		std::cout << ">> ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			dietary.new_contact();
		else if (cmd == "HELP")
			dietary.set_help();
		else if (cmd == "SEARCH")
			dietary.search_contact();
		else if (cmd == "EXIT")
		{
			std::cout << "all your contact information will be erased now" << std::endl;
			std::cout << "before exit this phonebook app. Bye." << std::endl;
		}
	} while (cmd != "EXIT");
	return (0);
}
