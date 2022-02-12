/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:30:35 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/11 17:39:28 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *str_p = &str;
	std::string& str_r = str;
	
	std::cout << "Adress de str : " << &str << std::endl;
	std::cout << "Adress contenu dans str_p : " << str_p << std::endl;
	std::cout << "Adress contenu dans str_r : " << &str_r << std::endl;
	
	std::cout << "Valeur de str : " << str << std::endl;
	std::cout << "Valeur pointer par str_p : " << *str_p << std::endl;
	std::cout << "Valeur pointer par str_r : " << str_r << std::endl;
}