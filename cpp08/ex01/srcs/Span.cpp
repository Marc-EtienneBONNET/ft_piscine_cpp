/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:26:14 by mbonnet           #+#    #+#             */
/*   Updated: 2022/04/12 18:01:09 by mbonnet          ###   ########.fr       */
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
    if (this->size_now == this->size)       
        throw(Span::tooMuch());
    this->size_now++;
    this->tab.push_back(nb);
    std::cout << VERT << "Ajoue du nombre : " << nb << " au tableau..." << BLANC << std::endl;
}

void               Span::addNumber(std::vector<unsigned int>::const_iterator deb, std::vector<unsigned int>::const_iterator fin)
{
    while (deb != fin)
        this->addNumber(*(deb++));
}


unsigned int       Span::shortestSpan(void)
{
   if (this->size_now < 2)
        throw (Span::tabTooSmal());
    unsigned int res;
    std::vector<unsigned int>::const_iterator tmp1 = this->tab.begin();
    std::vector<unsigned int>::const_iterator tmp2;
    std::sort(this->tab.begin(), this->tab.end());
    for (tmp1 = this->tab.begin(); tmp1 != this->tab.end(); tmp1++)
    {
        tmp2 = tmp1;
        tmp2++;
        if ( tmp1 == this->tab.begin() || (std::max(*tmp1,*tmp2) - std::min(*tmp1, *tmp2)) < res)
           res = (std::max(*tmp1,*(tmp2)) - std::min(*tmp1, *(tmp2)));
    }
    return (res);
}

unsigned int       Span::longestSpan(void)
{
     if (this->size_now < 2)
        throw (Span::tabTooSmal());
    std::sort(this->tab.begin(), this->tab.end());
    return (*(--tab.end()) - *tab.begin());
}


std::vector<unsigned int>    &Span::getTab(void)
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

