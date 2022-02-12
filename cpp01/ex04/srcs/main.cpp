//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/12 12:53:57 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

int	main(int ac, char **av)
{
	std::ifstream		fd_read;
	std::ofstream		fd_write;
	std::ostringstream	os;
	std::string			content;
	std::string			file;
	std::string			patterne;
	std::string			replace;
	std::size_t			i;

	if (ac != 4 || av[2][0] == '\0')
	{
		std::cout << "+ ou - de 3 argument on etait remplis" << std::endl;
		return (-1);
	}
	file = av[1];
	patterne = av[2];
	replace = av[3];
	fd_read.open(file.c_str(), std::ifstream::in);
	if (!fd_read.is_open())
	{
		std::cout << "fichier inexistant" << std::endl;
		return (-1);
	}
	fd_write.open((file+ ".replace").c_str(), std::ifstream::out);
	os << fd_read.rdbuf();
	content = os.str();
	i = content.find(patterne);
	if (i == std::string::npos)
	{
		std::cout << "aucune aucurance dans le fichier" << std::endl;
		return (0);
	}
	content.erase(i, patterne.length());
	content.insert(i, replace);
	fd_write << content;
	fd_read.close();
	fd_write.close();
	return (0);
}