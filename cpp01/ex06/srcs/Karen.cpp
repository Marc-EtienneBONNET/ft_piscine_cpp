/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:56:44 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/15 07:59:58 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Karen.hpp"

Karen::Karen(std::string lvl_min) : _lvl_min(lvl_min)
{
}
Karen::~Karen(void)
{
	
}


void	Karen::debug(void)
{
	std::cout  << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void	Karen::info(void)
{
	std::cout  << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Karen::warning(void)
{
	std::cout  << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout  << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Karen::my_print(std::string message)
{
	int x;	

	x = 0;
	while (this->message[x].message != message)
		x++;
	switch (this->_lvl_min[0])
	{
		case 'D' : 
			this->message[x].*f();
		break ;
		case  'I':
			this->message[x].*f();
		break ;
		case 'W' :
			this->message[x].*f();
		break ;
		case 'E':
			this->message[x].*f();
		break;
	}
}

void	Karen::complain(std::string level)
{
	int x;

	x = 0;
	this->message[0].message = "DEBUG";
	this->message[0].f = &Karen::debug;
	this->message[1].message = "INFO";
	this->message[1].f = &Karen::info;
	this->message[2].message = "WARNING";
	this->message[2].f = &Karen::warning;
	this->message[3].message = "ERROR";
	this->message[3].f = &Karen::error;
	this->my_print(level);
}


