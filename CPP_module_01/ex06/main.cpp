/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:12:19 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/19 12:22:50 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Karen.hpp"

int main (int argc, char **argv)
{
	Karen Karen;
	std::string options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;

	if (argc == 2)
	{
		i = 0;
		while (options[i] != argv[1] && i < 4)
			i++;
		switch (i)
		{
			case 0:
				std::cout << "[ " << options[0] << " ]" << std::endl;
				Karen.complain(options[0]);
			case 1:
				std::cout << "[ " << options[1] << " ]" << std::endl;
				Karen.complain(options[1]);
			case 2:
				std::cout << "[ " << options[2] << " ]" << std::endl;
				Karen.complain(options[2]);
			case 3:
				std::cout << "[ " << options[3] << " ]" << std::endl;
				Karen.complain(options[3]);
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	return (0);
}
