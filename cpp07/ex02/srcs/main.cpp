/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/17 15:28:52 by mbonnet          ###   ########.fr       */
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
	try 
	{
		
		std::cout << VIOLET << "-----test init avec argument constructeur a 10 (instance : test)-----" << BLANC << std::endl;
		std::cout << JAUNE << "nb element : " << test.size() << BLANC << std::endl;
		for (unsigned int i = 0; i < test.size(); i++)
			std::cout << "test : " << test[i] << std::endl;
		std::cout << VIOLET << "-----test init avec argument constructeur par copi(instance : test2 copi de test)-----" << BLANC << std::endl;
		std::cout << JAUNE << "nb element : " << test_2.size() << BLANC << std::endl;
		for (unsigned int i = 0; i < test_2.size(); i++)
			std::cout << "test_2 : " << (test_2[i]) << std::endl;
		std::cout << VIOLET << "-----test init avec argument constructeur vide(instance : test_3)-----" << BLANC << std::endl;
		std::cout << JAUNE << "nb element : " << test_3.size() << BLANC << std::endl;
		for (unsigned int i = 0; i < test_3.size(); i++)
			std::cout << "test_3 : " << (test_3[i]) << std::endl;
		test_3 = test_2;
		std::cout << VIOLET << "-----test avec une copie par opperator =(instance : test_3 copie de test_2)-----" << BLANC << std::endl;
		std::cout << JAUNE << "nb element : " << test_3.size() << BLANC << std::endl;
		for (unsigned int i = 0; i < test_3.size(); i++)
			std::cout << "test_3 : " << (test_3[i]) << std::endl;
		std::cout << VIOLET << "-----test d acces a un index non aloue(instance test_3 index 10)-----" << BLANC << std::endl;
			std::cout << "test_3 : " << (test_3[10]) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << ROUGE << e.what() << BLANC << std::endl;
	}
	return (0);
}