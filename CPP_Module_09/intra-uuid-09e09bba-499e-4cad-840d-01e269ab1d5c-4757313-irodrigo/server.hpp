/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:58:43 by irodrigo          #+#    #+#             */
/*   Updated: 2023/09/13 12:12:54 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SERVER_HPP
#define SERVER_HPP

#include <iostream>
#include <string>

class server{
	private:
		int _port;
		std::string _host;
		std::string _paswd;

		server();
		server(server const &cpy);
		server &operator= (server const &cpy);

	public:
		server(int port, std::string host, std::string password);
		~server();
};

#endif