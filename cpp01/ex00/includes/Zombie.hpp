/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:26:53 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/11 16:26:05 by mbonnet          ###   ########.fr       */
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
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);

private:
	std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif