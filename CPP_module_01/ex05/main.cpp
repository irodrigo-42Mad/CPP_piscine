/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:12:19 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/19 11:51:57 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Karen.hpp"

int main (void)
{
	Karen Karen;

	std::cout << "[DEBUG: ]" << std::endl;
	Karen.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "[INFO: ]" << std::endl;
	Karen.complain("INFO");
	std::cout << std::endl;
	std::cout << "[WARNING: ]" << std::endl;
	Karen.complain("WARNING");
	std::cout << std::endl;
	std::cout << "[ERROR: ]" << std::endl;
	Karen.complain("ERROR");
	return (0);
}
