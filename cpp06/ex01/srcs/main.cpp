/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/29 14:55:14 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	Data *test = new Data;
	Data *new_test;
	char *test;
	std::cout << VIOLET << "Avant : " << BLANC << std::endl;
	std::cout << "adresse de test     : " << test << std::endl;
	std::cout << VIOLET << "Apres : " << BLANC << std::endl;
	new_test = deserialize(serialize(test));
	std::cout << "adresse de test     : " << test << std::endl;
	std::cout << "adresse de new_test : " << new_test << std::endl;
	delete test;
	return (0);
}