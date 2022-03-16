/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/16 16:45:47 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

Base *generate(void)
{
	int rande;
    std::srand(std::time(NULL));
    rande = rand() % 100;
	if (rande < 33)
		return (new A());
	else if (rande < 66)
		return (new B());
	else
		return (new C());
}

void identify(Base *p)
{
	Base *test_a;
	test_a = dynamic_cast<A *>(p);
	if (test_a == NULL)
	{
		test_a = dynamic_cast<B *>(p);
		if (test_a == NULL)
		{
			test_a = dynamic_cast<C *>(p);
			if (test_a != NULL)
				std::cout << VERT << "la class est deriver de la classe A" << BLANC << std::endl;
		}
		else
			std::cout << VERT << "la class est deriver de la classe B" << BLANC << std::endl;
	}
	else
		std::cout << VERT << "la class est deriver de la classe C" << BLANC << std::endl;
	delete test_a;
}

void identify(Base &p)
{
	Base &test_a = *(new Base());
	try
	{
		test_a = dynamic_cast<A &>(p);
		std::cout << JAUNE << "la class est deriver de la classe A" << BLANC << std::endl;
	}
	catch (std::exception &bc)
	{
		try
		{
			test_a = dynamic_cast<B &>(p);
			std::cout << JAUNE << "la class est deriver de la classe B" << BLANC << std::endl;
		}
		catch (std::exception &bc)
		{
			try
			{
				test_a = dynamic_cast<C &>(p);
				std::cout << JAUNE << "la class est deriver de la classe C" << BLANC << std::endl;
			}
			catch (std::exception &bc)
			{
				std::cout << JAUNE << "le forma de class ver lequel nous voulons cast est incoerant..." << BLANC << std::endl;
			}
		}
	}
	delete &test_a;
}

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	identify(generate());
	identify(*(generate()));
	return (0);
}