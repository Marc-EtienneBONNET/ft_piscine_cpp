/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:18:22 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/28 13:59:15 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

int	PhoneBook::nb_contact = 0;

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::my_ajoue_contact(void)
{
	int	x;
	int	res;
	int	max;

	x = 0;
	res = 0;
	max = 0;
	if (this->nb_contact < 8)
	{
		this->contact[this->nb_contact].my_modifi_contact();
		this->contact[this->nb_contact].id = this->nb_contact; 
		PhoneBook::nb_contact++; 
	}
	else
	{
		while (x < 8)
		{
			if (this->contact[x].id > this->contact[max].id)
				max = x;
			if (this->contact[x].id < this->contact[res].id)
				res = x;
			x++;
		}
		this->contact[res].my_modifi_contact();
		this->contact[res].id = this->contact[max].id + 1; 
	}
}

void	PhoneBook::my_affiche_all_contact(void) const
{
	int	x;
	std::string index_str;
	int			index;

	x = 0;
	while (x < PhoneBook::nb_contact)
	{
		std::cout << std::endl;
		this->contact[x].my_affichage_all(x);
		x++;
	}
	if (this->nb_contact <= 0)
		return ;
	std::cout << VERT "Choisisez l index du contact a checker >" BLANC;
	while (1)
	{
		std::getline(std::cin, index_str);
		if (index_str[0] >= '0' && index_str[0] <= '8')
		{
			index = index_str[0] - '0';
			if (index <= 7 && index < this->nb_contact)
				break ;
		}
		std::cout << ROUGE <<"index innexistant ! Retante tas chance >" << BLANC;
	 }
	this->contact[index].my_affichage_one();
}