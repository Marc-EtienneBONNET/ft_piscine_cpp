/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:41:54 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/28 13:57:23 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::my_modifi_contact(void)
{
	this->prenom = "";
	this->nom = "";
	this->surnom = "";
	this->num = "";
	this->dark_secret = "";
	
	while (!this->prenom[0] || !this->nom[0]|| !this->surnom[0] || !this->num[0] || !this->dark_secret[0])
	{
		std::cout << ROUGE << "Attention ! tout les chant doive etre remplis" << BLANC <<std::endl;
		if (!this->prenom[0])
		{
			std::cout << VIOLET "Le prenom      : " BLANC;
			std::getline(std::cin, this->prenom);
		}
		if (!this->nom[0])
		{
			std::cout << VIOLET "Le nom         : " BLANC;
			std::getline(std::cin, this->nom);
		}
		if (!this->surnom[0])
		{
			std::cout << VIOLET "Le surnom      : " BLANC;
			std::getline(std::cin, this->surnom);
		}
		if (!this->num[0])
		{
			std::cout << VIOLET "Le num         : " BLANC;
			std::getline(std::cin, this->num);
		}
		if (!this->dark_secret[0])
		{
			std::cout << VIOLET "Le noir secret : " BLANC;
			std::getline(std::cin, this->dark_secret);
		}
	}
}



void	Contact::my_affichage_all(int index) const
{
	unsigned int x;
	int y;
	int	tmp_nb;
	std::string tmp[4];

	y = 0;
	x = 0;
	tmp[0] = this->prenom;
	tmp[1] = this->nom;
	tmp[2] = this->surnom;
	tmp_nb = this->id;
	x = 9;
	while (x-- > 0)
		std::cout << " ";
	std::cout << BLEU << index << BLANC;
	std::cout << "|";
	while (y < 3)
	{
		x = 0;
		while (10 - tmp[y].length() > x)
		{
			x++;
			std::cout << " ";
		}
		if (tmp[y].length() <= 10)
			std::cout << BLEU << tmp[y] << BLANC;
		else
		{
			std::cout << ".";
			x = 0;
			while (tmp[y][x] && x < 9)
				std::cout << BLEU << tmp[y][x++] << BLANC;
		}
		std::cout << "|";
		y++;
	}
	std::cout << std::endl;
}

void	Contact::my_affichage_one(void) const
{
	std::cout << BLEU << "Prenom : " << this->prenom << std:: endl;
	std::cout << "Nom    : " << this->nom << std:: endl;
	std::cout << "Surnom : " << this->surnom << std:: endl;
	std::cout << "Num    : " << this->num << std:: endl;
	std::cout << "Secret : " << this->dark_secret << BLANC << std:: endl;
}