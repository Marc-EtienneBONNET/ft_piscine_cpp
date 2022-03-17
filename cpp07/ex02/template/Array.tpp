/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:08:50 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/17 15:25:46 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

template<typename T>
Array<T>::Array(void)
{
    this->tab = new T();
    this->_size = 1;
}

template<typename T>
Array<T>::Array(unsigned int valeur)
{
    this->tab = new T[valeur];
    this->_size = valeur;
}

template<typename T>
Array<T>::Array(Array &ori)
{
    this->_size = ori.size();
    this->tab = new T[this->_size];
    for (unsigned int i = 0; i < this->_size; i++)
    {
        this->tab[i] = ori.getTab(i);
    }
}

template<typename T>
Array<T> &Array<T>::operator=(Array &ori)
{
    delete [] this->tab;
    this->_size = ori.size();
    this->tab = new T[this->_size];
   for (unsigned int i = 0; i < this->_size; i++)
    {
        this->tab[i] = ori.getTab(i);
    }
    return (*this);
}

template<typename T>
T Array<T>::operator[](unsigned int size)
{
    if (size >= this->_size)
        throw(Array<T>::invalideIndex());
    return (this->tab[size]);
    
}


template<typename T>
Array<T>::~Array(void)
{
    delete [] this->tab;
}

template<typename T>
T   Array<T>::getTab(unsigned int index)
{
     if (index >= this->_size)
        throw(Array<T>::invalideIndex());
    return (this->tab[index]);
}

template<typename T>
unsigned int   Array<T>::size(void)
{
    return (this->_size);
}

template<typename T>
const char * Array<T>::invalideIndex::what() const throw()
{
    return ("Desoler, mais l index demander n as pas etait aloue...");
}

