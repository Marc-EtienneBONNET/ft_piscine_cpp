/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/16 18:59:41 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/whatever.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	int nb1 = 0;
	int nb2 = 10;
	float nb3 = 10.20f;
	float nb4 = 30.20f;

	std::cout << VIOLET << "-----test des fonction swap, min, max avec nb1 = int 0 et nb2 = int 10-----" << BLANC << std::endl;
	std::cout << VERT << "avant swap ... " << BLANC << std::endl << "nb1 : " << nb1 << " nb2 : " << nb2 << std::endl;
	swap<int>(nb1,nb2);
	std::cout << VERT << "apres swap ... " << BLANC << std::endl << "nb1 : " << nb1 << " nb2 : " << nb2 << std::endl;
	std::cout << "res de min : " << min<int>(nb1, nb2) << std::endl;
	std::cout << "res de max : " << max<int>(nb1, nb2) << std::endl << std::endl;
	
	std::cout << VIOLET << "-----test des fonction swap, min, max avec nb3 = float 10.20f et nb4 = float 30.20f-----" << BLANC << std::endl;
	std::cout << VERT << "avant swap ... " << BLANC << std::endl << "nb3 : " << nb3 << " nb4 : " << nb4 << std::endl;
	swap<float>(nb3,nb4);
	std::cout << VERT << "apres swap ... " << BLANC << std::endl << "nb3 : " << nb3 << " nb4 : " << nb4 << std::endl;
	std::cout << "res de min : " << min<float>(nb3, nb4) << std::endl;
	std::cout << "res de max : " << max<float>(nb3, nb4) << std::endl << std::endl;
	
	int a = 2;
	int b = 3;
	std::cout << VIOLET << "-------------------------test fourni par le sujet---------------------------------------" << BLANC << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return (0);
}