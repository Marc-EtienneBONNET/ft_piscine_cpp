/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:14:08 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/16 18:57:39 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHATEVER_HPP
# define SHATEVER_HPP
# include <iostream>
# include <string>

# define BLEU "\e[1;36m"
# define BLEU_2 "\e[1;34m"
# define ROUGE "\e[1;31m"
# define VERT "\e[1;32m"
# define JAUNE "\e[1;33m"
# define VIOLET "\e[1;35m"
# define BLANC "\e[0m"

template<typename T>
void	swap(T &nb1, T &nb2)
{
	T tmp;
	tmp = nb1;
	nb1 = nb2;
	nb2 = tmp;
}

template<typename T>
T	&min(T &nb1, T &nb2)
{
	if (nb2 <= nb1)
		return (nb2);
	return (nb1);
}

template<typename T>
T	&max(T &nb1, T &nb2)
{
	if (nb2 >= nb1)
		return (nb2);
	return (nb1);
}


#endif