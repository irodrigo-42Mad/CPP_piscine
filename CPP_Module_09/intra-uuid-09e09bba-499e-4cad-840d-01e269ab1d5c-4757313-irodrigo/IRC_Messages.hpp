#pragma once
#ifndef IRC_MSGS_HPP
#define IRC_MSGS_HPP

#include "IRC_headers.hpp"

// message definitions

	int	away(User &sender, const IRC::evt_Msg &msg);
	int	die(User &sender, const IRC::evt_Msg &msg);
	int	info(User &sender, const IRC::evt_Msg &msg);
	int	invite(User &sender, const IRC::evt_Msg &msg);
	int	join(User &sender, const IRC::evt_Msg &msg);
	int	kick(User &sender, const IRC::evt_Msg &msg);
	int	kill(User &sender, const IRC::evt_Msg &msg);
	int	list(User &sender, const IRC::evt_Msg &msg);
	int	lusers(User &sender, const IRC::evt_Msg &msg);
	int	mode(User &sender, const IRC::evt_Msg &msg);


	int	motd(User &sender, const IRC::evt_Msg &msg);
	
	
	int	names(User &sender, const IRC::evt_Msg &msg);
	int	nick(User &sender, const IRC::evt_Msg &msg);
	int	notice(User &sender, const IRC::evt_Msg &msg);
	int	oper(User &sender, const IRC::evt_Msg &msg);
	int	part(User &sender, const IRC::evt_Msg &msg);
	int	pass(User &sender, const IRC::evt_Msg &msg);
	int	ping(User &sender, const IRC::evt_Msg &msg);
	int	pong(User &sender, const IRC::evt_Msg &msg);
	int	privmsg(User &sender, const IRC::evt_Msg &msg);
	int	quit(User &sender, const IRC::evt_Msg &msg);
	int rehash(User &sender, const IRC::evt_Msg &msg);
	int restart(User &sender, const IRC::evt_Msg &msg);
	int	service(User &sender, const IRC::evt_Msg &msg);
	int	servlist(User &sender, const IRC::evt_Msg &msg);
	int	squery(User &sender, const IRC::evt_Msg &msg);
	int	stats(User &sender, const IRC::evt_Msg &msg);
	int	time(User &sender, const IRC::evt_Msg &msg);
	int	topic(User &sender, const IRC::evt_Msg &msg);
	int	user(User &sender, const IRC::evt_Msg &msg);
	int userhost(User &sender, const IRC::evt_Msg &msg);
	int	version(User &sender, const IRC::evt_Msg &msg);
	int	who(User &sender, const IRC::evt_Msg &msg);
	int whois(User &sender, const IRC::evt_Msg &msg);
	int whowas(User &sender, const IRC::evt_Msg &msg);

	// server status modes
	enum Status
	{
		ALIVE,
		RESTART,
		DIE
	};

	// server needed constants
	static const std::string _version;
	static const size_t maxLineSize;

#endif