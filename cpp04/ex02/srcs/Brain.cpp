/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:56:33 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 17:57:19 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

Brain::Brain(void)
{
	std::cout << BLEU << "Construction Brain" << BLANC << std::endl;
}

Brain::~Brain(void)
{
	std::cout << BLEU << "Destruction Brain" << BLANC << std::endl;
}

Brain &Brain::operator=(Brain &ori)
{
	if (this != &ori)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = ori.ideas[i];
	}
	return (*this);
}

std::string *Brain::getIdeas(void)
{
	return (this->ideas);
}
