/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/17 11:01:56 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	int tab[] = {1,2,3};
	float tab2[] = {1.25f,2.45f,3.12f};
	char tab3[] = {'a','b','c'};
	std::cout << VIOLET << "----------test iter avec int----------" << BLANC << std::endl;
	iter<int>(tab, 3, &f);
	std::cout << VIOLET << "---------test iter avec float---------" << BLANC << std::endl;
	iter<float>(tab2, 3, &f);
	std::cout << VIOLET << "----------test iter avec char---------" << BLANC << std::endl;
	iter<char>(tab3, 3, &f);
	return (0);
}