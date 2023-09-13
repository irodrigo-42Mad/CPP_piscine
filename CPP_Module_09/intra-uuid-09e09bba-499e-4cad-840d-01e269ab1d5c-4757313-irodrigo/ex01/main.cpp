/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:52:27 by irodrigo          #+#    #+#             */
/*   Updated: 2023/08/31 10:59:45 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int argc, char **argv)
{
   	std::string tokens;

	if (std::strcmp(argv[0], "./RPN")!= 0)
	{
		std::cerr << "Incorrect application name, correct name has RPN" << std::endl;
		return (-1);
	}	
	if (argc < 2)
	{
		std::cerr << "Incorrect parameter number" << std::endl;
		return (-1);
	}
	try
	{
		for (int i = 1; i < argc; i++)
		{
			if (std::strlen (argv[i]) == 0)
			{
				std::cerr << "Any parameter has empty in collection." << std::endl;
				return (-1);
			}
			if (check_elm(argv[i], std::strlen(argv[i]))== "$")
				return (-1);
			else
				tokens += check_elm(argv[i], std::strlen(argv[i]));
		}
		RPN rpn(tokens);
   		int result = rpn.evaluate();
   		std::cout << "Result: " << result << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

std::string check_elm(std::string elm, int nbr)
{
	std::stringstream ss;
	int sign = 0;
	int number = 0;

	for (int i = 0; i < nbr; i++)
	{
		if (elm[i] != '\0' && (std::isdigit(elm[i]) || elm[i] == '+' || elm[i] == '-' || elm[i] == '*' || elm[i] == '/' || elm[i] == ' '))
		{
			if (elm[i] != ' ')
				ss << elm[i] << " ";
			if (std::isdigit(elm[i]))
				number++;
			if (elm[i] == '+' || elm[i] == '-' || elm[i] == '*' || elm[i] == '/')
				sign++;
		}
		else
		{
			std::cerr << "Incorrect parameter provided, only numbers [0 - 9] or [+ - * /] operators has valid" << std::endl;
			return ("$");
		}
	}
	return (ss.str());
}
