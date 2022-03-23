/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/23 16:35:24 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"
  
int	main(int ac, char **av)
{
	(void)ac;
	(void)av;/*
	Character *cara = new Character("tester");
	Ice *ice_1 = new Ice();
	Ice *ice_2 = new Ice();
	Cure *cure_1 = new Cure();
	Cure *cure_2 = new Cure();
	Cure *cure_3 = new Cure();
	
	cara->equip(ice_1);
	cara->equip(ice_2);
	cara->equip(cure_1);
	cara->equip(cure_2);
	cara->equip(cure_3);
	cara->use(0,*cara);

	Character *cara_2 = new Character(*cara);
	Ice *ice_12 = new Ice();
	Ice *ice_13 = new Ice();
	cara_2->equip(ice_12);
	cara_2->equip(ice_13);
	cara_2->use(0,*cara_2);
	delete cara_2;
	delete cara;
	*/

	std::cout << std::endl << "----main sujet----" << std::endl << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	
	return 0;
	
}