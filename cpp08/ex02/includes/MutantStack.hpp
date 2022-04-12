/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:14:08 by mbonnet           #+#    #+#             */
/*   Updated: 2022/04/12 18:06:18 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_DEFINE_INCLUDE_H
# define MY_DEFINE_INCLUDE_H
# include <iostream>
# include <string>
# include <stack>

# define BLEU "\e[1;36m"
# define BLEU_2 "\e[1;34m"
# define ROUGE "\e[1;31m"
# define VERT "\e[1;32m"
# define JAUNE "\e[1;33m"
# define VIOLET "\e[1;35m"
# define BLANC "\e[0m"

template<typename T>
class MutantStack : public std::stack<T>
{
public :
    MutantStack(void);
    MutantStack(MutantStack &ori);
    ~MutantStack(void);
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
    iterator begin(void);
    iterator end(void);
    const_iterator begin(void) const;
    const_iterator end(void) const;
    reverse_iterator rbegin(void);
    reverse_iterator rend(void);
    const_reverse_iterator rbegin(void) const;
    const_reverse_iterator rend(void) const;
protected :
private :
};

#include "../templates/MutantStack.tpp"
#endif