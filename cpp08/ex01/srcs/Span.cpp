/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:26:14 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/21 14:26:16 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span(void) : size_now(0), size(0)
{}

Span::Span(unsigned int nb) : size_now(0), size(nb)
{
    if (this->size < 1)
        throw (Span::tooLite());
        
}

Span::~Span(void)
{}


void Span::addNumber(unsigned int nb)
{
    if (static_cast<unsigned int>(this->tab.size()) == this->size)
        throw(Span::tooMuch());
    this->size_now++;
    this->tab.push_back(nb);
    std::cout << VERT << "Ajoue du nombre : " << nb << " au tableau..." << BLANC << std::endl;
}

unsigned int       Span::shortestSpan(void)
{
    if (this->size_now < 2)
        throw (Span::tabTooSmal());
    unsigned int res;
    unsigned int tmp;
    std::list<unsigned int>::const_iterator tmp1 = this->tab.begin();
    std::list<unsigned int>::const_iterator tmp2;
   for (unsigned int x = 0; x < static_cast<unsigned int>(this->tab.size()) ; x++)
    {
        tmp2 = tmp1;
        tmp2++;
        if (*tmp1 > *tmp2)
            tmp = *tmp1 - *tmp2;
        else
            tmp = *tmp2 - *tmp1;
        if (x == 0)
                res = tmp;
        for (unsigned int y = x + 1; y < static_cast<unsigned int>(this->tab.size()); y++)
        {
            if (*tmp1 > *tmp2)
                tmp = *tmp1 - *tmp2;
            else
                tmp = *tmp2 - *tmp1;
            if (res > tmp)
                res =  tmp;
            tmp2++;

        }
        tmp1++;
    }
    return (res);
}

unsigned int       Span::longestSpan(void)
{
    if (this->size_now < 2)
        throw (Span::tabTooSmal());
    unsigned int res;
    unsigned int tmp;
    std::list<unsigned int>::const_iterator tmp1 = this->tab.begin();
    std::list<unsigned int>::const_iterator tmp2;
   for (unsigned int x = 0; x < static_cast<unsigned int>(this->tab.size()) ; x++)
    {
        tmp2 = tmp1;
        tmp2++;
        if (*tmp1 > *tmp2)
            tmp = *tmp1 - *tmp2;
        else
            tmp = *tmp2 - *tmp1;
        if (x == 0)
                res = tmp;
        for (unsigned int y = x + 1; y < static_cast<unsigned int>(this->tab.size()); y++)
        {
            if (*tmp1 > *tmp2)
                tmp = *tmp1 - *tmp2;
            else
                tmp = *tmp2 - *tmp1;
            if (res < tmp)
                res =  tmp;
            tmp2++;

        }
        tmp1++;
    }
    return (res);
}


std::list<unsigned int>    &Span::getTab(void)
{
    return (this->tab);
}

Span    &Span::operator=(Span &ori)
{
    if (this != &ori)
        this->tab = ori.getTab();
    return (*this);
}

const char * Span::tooMuch::what() const throw()
{
    return ("Desoler mais le tableau est plain...");
}

const char * Span::tooLite::what() const throw()
{
    return ("Desoler mais le tableau est trop petit...");
}

const char * Span::tabTooSmal::what() const throw()
{
    return ("Desoler mais il faux au moin deux chiffre dans le tableau...");
}

