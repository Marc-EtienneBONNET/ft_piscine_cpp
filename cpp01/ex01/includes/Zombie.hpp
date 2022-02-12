/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:26:53 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/11 17:26:11 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_ZOMBIE_H
# define H_ZOMBIE_H
# include <iostream>
# include <string>
# define BLEU "\e[1;36m"
# define BLEU_2 "\e[1;34m"
# define ROUGE "\e[1;31m"
# define VERT "\e[1;32m"
# define JAUNE "\e[1;33m"
# define VIOLET "\e[1;35m"
# define BLANC "\e[0m"


class Zombie
{
public:
	Zombie(void);
	~Zombie(void);
	void	announce(void);
	void	rename(std::string name);
	int		nb_zombie(void);
private:
	static int _nb_zombie;
	std::string _name;
};

Zombie	*zombieHorde(int N, std::string name);
#endif