/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:14:08 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/21 14:26:33 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_DEFINE_INCLUDE_H
# define MY_DEFINE_INCLUDE_H
# include <iostream>
# include <string>
# include <list>
# include <cstdlib>


# define BLEU "\e[1;36m"
# define BLEU_2 "\e[1;34m"
# define ROUGE "\e[1;31m"
# define VERT "\e[1;32m"
# define JAUNE "\e[1;33m"
# define VIOLET "\e[1;35m"
# define BLANC "\e[0m"

class   Span
{
public :
    Span(void);
    Span(unsigned nb);
    ~Span(void);
    void                addNumber(unsigned int nb);
    unsigned int       shortestSpan(void);
    unsigned int       longestSpan(void);
    std::list<unsigned int>    &getTab(void);
    Span       &operator=(Span &ori);
    class tooMuch : public std::exception
    {
        public : 
			virtual const char * what() const throw();
    };
    class tooLite : public std::exception
    {
        public : 
			virtual const char * what() const throw();
    };
    class tabTooSmal : public std::exception
    {
        public : 
			virtual const char * what() const throw();
    };
protected :
private :
    std::list<unsigned int>    tab;
    unsigned int               size_now; 
    unsigned int               size;  
};


#endif