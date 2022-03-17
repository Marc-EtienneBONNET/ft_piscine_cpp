/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:14:08 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/17 15:25:38 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
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
class Array
{
public :
    Array<T>(void);
    Array<T>(unsigned int valeur);
    Array<T>(Array &ori);
    ~Array<T>(void);
    Array &operator=(Array &ori);
    T       operator[](unsigned int size);
    T               getTab(unsigned int index);
    unsigned int    size(void);
protected :
private : 
    class invalideIndex : public std::exception
    {
        public : 
			virtual const char * what() const throw();
    };
    T               *tab;
    unsigned int    _size;
};


#include "../template/Array.tpp"
#endif