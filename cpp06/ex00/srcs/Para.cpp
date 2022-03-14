/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Para.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:12:16 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/14 11:33:38 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

Para::Para(char *valeur)
{
	(void)valeur;
}


Para::Para(Para &ori)
{
	if (this != &ori)
		*this = ori;
}

Para::~Para(void)
{}

Para	&Para::operator=(Para &ori)
{
	if (this != &ori)
		*this = ori;
	return (*this);
}

const char * Para::badPara::what() const throw()
{
    return ("Parametre donner incorecte !");
}