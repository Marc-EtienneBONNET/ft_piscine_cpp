/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/17 14:22:56 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	Array<float> test(10);
	Array<float> test_2(test);
	Array<float> test_3;
	std::cout << VIOLET << "-----test init avec argument constructeur a 10 (instance : test)-----" << BLANC << std::endl;
    for (unsigned int i = 0; i < test.getSize(); i++)
		std::cout << "test : " << (test.getTab(9)) << std::endl;
	std::cout << VIOLET << "-----test init avec argument constructeur par copi(instance : test2 copi de test)-----" << BLANC << std::endl;
	for (unsigned int i = 0; i < test_2.getSize(); i++)
		std::cout << "test_2 : " << (test_2.getTab(9)) << std::endl;
	std::cout << VIOLET << "-----test init avec argument constructeur vide(instance : test_3)-----" << BLANC << std::endl;
	for (unsigned int i = 0; i < test_3.getSize(); i++)
		std::cout << "test_3 : " << (test_3.getTab(9)) << std::endl;
	test_3 = test_2;
	std::cout << VIOLET << "-----test avec une copie par opperator =(instance : test_3 copie de test_2)-----" << BLANC << std::endl;
	for (unsigned int i = 0; i < test_3.getSize(); i++)
		std::cout << "test_3 : " << (test_3.getTab(9)) << std::endl;
	//(void)test;
	//delete test;
	return (0);
}