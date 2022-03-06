/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 12:06:05 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

int	main(void)
{
	Animal *animal = new Animal();
	Animal *dog = new Dog();
	Animal *cat = new Cat();

	std::cout << "--------------type : " << std::endl;
	animal->printType();
	dog->printType();
	cat->printType();
	std::cout << std::endl << "-----makeSound-----" << std::endl;
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();
	std::cout << "-------------------" << std::endl << std::endl;
	


	delete animal;
	delete dog;
	delete cat;
	return (0);
}