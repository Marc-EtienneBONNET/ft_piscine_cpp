/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/12 11:09:33 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"


int	my_replace_s1_by_s2(std::string file, std::string s1, std::string s2)
{
	std::fstream my_file(file.c_str());
	std::string str;
	if (!my_file)
	{
		std::cout << "fichier inexistant" << std::endl;
		return (-1);
	}
	while (my_file >> str)
	{
		if (str == s1)
		{
			my_file << s2;
			std::cout << "Occurence : " << str << std::endl;
			std::cout << s2 << std::endl;
		}
	}
	my_file.close();
	return (0);
}


int	main(int ac, char **av)
{
	(void)ac;
	//(void)av;
	//if (ac != 4)
	//{
	//	std::cout << "+ ou - de 3 argument on etait remplis" << std::endl;
	//	return (-1);
	//}
	my_replace_s1_by_s2(av[1], av[2], av[3]);
	return (0);
}