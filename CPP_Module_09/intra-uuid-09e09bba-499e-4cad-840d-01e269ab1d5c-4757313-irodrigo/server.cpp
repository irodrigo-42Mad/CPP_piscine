/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:59:21 by irodrigo          #+#    #+#             */
/*   Updated: 2023/09/08 13:02:19 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.hpp"

server::server(int port, std::string host, std::string password):
	_port(port), _host(host), _paswd(password)
{
	std::cout << "se creó el servidor" << std::endl;
}

server::~server()
{
	std::cout << "se eliminó el servidor " << std::endl;
}