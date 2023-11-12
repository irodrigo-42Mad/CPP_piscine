/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:45:35 by irodrigo          #+#    #+#             */
/*   Updated: 2022/07/27 11:54:33 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <locale>

/**
 * function that converts text to upper
 * maintaining signs
 * 
 * PARAMS
 * 	 main argv: text params individual passed
 * 
 * RETURN
 * 	 Main function returns 0 if success
 * 
 **/
 
void ft_megaphone(std::string text);

int main (int argc, char **argv)
{
	int i;

	if (argc < 2)
		std::cout << "* LOUD AND UMBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (i < argc)
		{
			ft_megaphone (argv[i]);
			if (argc > 2)
				std::cout << " ";
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}

void ft_megaphone(std::string text)
{
	size_t i;

	i = 0;
	while (i < text.length())
	{
		std::cout << (char)std::toupper(text[i]);
		i++;
	}
}
