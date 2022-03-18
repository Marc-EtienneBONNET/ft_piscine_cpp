/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:32:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/18 15:43:25 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

class nbIntrouvable : public std::exception
{
	public : 
		virtual const char * what() const throw();
};

const char * nbIntrouvable::what() const throw()
{
    return ("l information rechercher ne fais pas partie du tableau!");
}


template<typename T>
void   easyfind(std::list<T> tab, T nb)
{
    typename std::list<T>::iterator res;

    typename std::list<T>::iterator pd = tab.begin();
    typename std::list<T>::iterator pf = tab.end();
    res = std::find(pd, pf, nb);
    if (*res != nb)
        throw (nbIntrouvable());
    std::cout << VERT << "le nombre : " << *res << " est present dans le tableau" << BLANC << std::endl;
}