/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/07 10:14:12 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"


int	main(void)
{
	PhoneBook	PhoneBook;
	std::string	tmp = "NULL";

	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
	std::cout << BLEU "\t\t----------------------------------------------------------------------" BLANC <<std::endl;
	std::cout << BLEU "\t\tBonjour, merci d avoir choisi Papi-Phone pour votre gestion de contact" BLANC << std::endl;
	std::cout << BLEU "\t\t----------------------------------------------------------------------" BLANC <<std::endl;
	std::cout << BLEU "\t   \"ADD\" pour ajouter un contact" << " \"SEARCH\" pour chercher un contact" << " \"EXIT\" pour sortir" BLANC << std::endl;
	std::cout << std::endl << std::endl;
	while (tmp != "EXIT")
	{
		std::cout << VIOLET "|\tPapi-Phone-->>" BLANC;
		std::cin >> tmp;
		if (tmp == "ADD")
			PhoneBook.my_ajoue_contact();
		else if (tmp == "SEARCH")
			PhoneBook.my_affiche_all_contact();
	}
	return (0);
}