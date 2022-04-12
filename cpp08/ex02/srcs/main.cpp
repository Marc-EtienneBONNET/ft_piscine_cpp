/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/04/12 18:09:09 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;

	MutantStack<int> mstack;
	mstack.push(3);
	mstack.push(10);
	std::cout << VIOLET << "---------nombre---------" << BLANC << std::endl;
	std::cout << VIOLET << "push n1 : 3" << BLANC << std::endl;
	std::cout << VIOLET << "push n1 : 10" << BLANC << std::endl;

	std::cout << VIOLET << "--------original--------" << BLANC << std::endl;
	std::cout << VIOLET << "Top  : " << mstack.top() << BLANC << std::endl;
	std::cout << VIOLET << "Size : " << mstack.size() << BLANC << std::endl;
	std::cout << VIOLET << "----------copy----------" << BLANC << std::endl;
	MutantStack<int> test(mstack);
	std::cout << VIOLET << "Top  : " << test.top() << BLANC << std::endl;
	std::cout << VIOLET << "Size : " << test.size() << BLANC << std::endl;
	std::cout << VIOLET << "----------pop-----------" << BLANC << std::endl;
	test.pop();
	std::cout << VIOLET << "Top  : " << test.top() << BLANC << std::endl;
	std::cout << VIOLET << "Size : " << test.size() << BLANC << std::endl;

	std::cout << VIOLET << "---------------test iterator----------------" << BLANC << std::endl;
	test.push(22);
	test.push(45);
	test.push(15);
	test.push(12);
	MutantStack<int>::iterator it = test.begin();
	MutantStack<int>::iterator ite = test.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << VIOLET << "valeur : " << *it << BLANC << std::endl;
		++it;
	}
	return (0);
}