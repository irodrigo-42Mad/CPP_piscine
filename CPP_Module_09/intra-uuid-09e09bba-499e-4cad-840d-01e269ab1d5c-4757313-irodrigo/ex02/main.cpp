/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:55:49 by irodrigo          #+#    #+#             */
/*   Updated: 2023/09/13 13:35:08 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>

int main (int argc, char **argv)
{
	std::stringstream ss;
   	std::string tokens;
	PmergeMe element;
	
	std::string elm;
	
	if (std::strcmp(argv[0], "./PmergeMe")!= 0)
	{
		std::cerr << "Incorrect Program name: cannot execute!!." << std::endl;
		return (-1);
	}
	if (argc < 2)
	{
		std::cerr << "Incorrect parameter number" << std::endl;
		return (-1);
	}

	// begin of primary process checks and element adquire
	for (int i = 1; i < argc; i++)
	{
		if (check_elm (argv[i]) != "$")
			tokens += check_elm (argv[i]);
		else
			return (-1);
	}

	element.loadStructs (tokens);
	element.getlist (FIRST, tokens);
	element.mergeOrder (VCT);
	element.getTime(VCT);
	element.mergeOrder (LST);
	element.getTime(LST);
	element.getlist(LAST, "\0");
}

std::string check_elm(std::string elm)
{
	std::stringstream ss;
	std::string token;
	int i = 0;

	while (elm[i] != '\0')
	{
		if (elm[i] != ' ')
		{
			if (std::isdigit(elm[i]))
				token += elm[i];
			else
			{
				std::cerr << "Incorrect parameter provided, only positive numbers has valid" << std::endl;
				return ("$");
			}
		}
		else
		{
			ss << token << " ";
			token = "\0";
		}
		i++;
	}
	if (token.length() > 0)
	{
		ss << token << " ";
		token = "\0";
	}
	return (ss.str());
}
