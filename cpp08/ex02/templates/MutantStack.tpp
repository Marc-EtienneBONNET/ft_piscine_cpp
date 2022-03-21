/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:49:34 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/21 16:19:08 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>()
{
    
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack &ori) : std::stack<T>(ori)
{
    
}

template<typename T>
MutantStack<T>::~MutantStack(void)
{
    
}

template<typename T>
typename MutantStack<T>::iterator                MutantStack<T>::begin(void)
{
    return (this->c.begin());
}
template<typename T>
typename MutantStack<T>::iterator                MutantStack<T>::end(void)
{
    return (this->c.end());
}
template<typename T>
typename MutantStack<T>::const_iterator          MutantStack<T>::begin(void) const
{
    return (this->c.begin());
}
template<typename T>
typename MutantStack<T>::const_iterator          MutantStack<T>::end(void) const
{
    return (this->c.end());
}
template<typename T>
typename MutantStack<T>::reverse_iterator        MutantStack<T>::rbegin(void)
{
    return (this->c.rbegin());
}
template<typename T>
typename MutantStack<T>::reverse_iterator        MutantStack<T>::rend(void) 
{
    return (this->c.rend());
}
template<typename T>
typename MutantStack<T>::const_reverse_iterator  MutantStack<T>::rbegin(void) const
{
    return (this->c.rbegin());
}
template<typename T>
typename MutantStack<T>::const_reverse_iterator  MutantStack<T>::rend(void) const
{
    return (this->c.rend());
}