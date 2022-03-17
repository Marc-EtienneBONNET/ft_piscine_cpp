/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:08:50 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/17 14:19:48 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

template<typename T>
Array<T>::Array(void)
{
    this->tab = new T();
    this->size = 1;
}

template<typename T>
Array<T>::Array(unsigned int valeur)
{
    this->tab = new T[valeur];
    this->size = valeur;
}

template<typename T>
Array<T>::Array(Array &ori)
{
    this->size = ori.getSize();
    this->tab = new T[this->size];
    for (unsigned int i = 0; i < this->size; i++)
    {
        this->tab[i] = ori.getTab(i);
    }
}

template<typename T>
Array<T> &Array<T>::operator=(Array &ori)
{
    (void)ori;
    delete this->tab;
    this->size = ori.getSize();
    this->tab = new T[this->size];
   for (unsigned int i = 0; i < this->size; i++)
    {
        this->tab[i] = ori.getTab(i);
    }
    return (*this);
}


template<typename T>
Array<T>::~Array(void)
{
}

template<typename T>
T   Array<T>::getTab(int index)
{
    return (this->tab[index]);
}

template<typename T>
unsigned int   Array<T>::getSize(void)
{
    return (this->size);
}

