/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 08:36:23 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/09 08:54:32 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_H 
# define Bureaucrat_H
# include <iostream>
# include <string>
# define BLEU "\e[1;36m"
# define BLEU_2 "\e[1;34m"
# define ROUGE "\e[1;31m"
# define VERT "\e[1;32m"
# define JAUNE "\e[1;33m"
# define VIOLET "\e[1;35m"
# define BLANC "\e[0m"
class AForm;
#include "AForm.hpp"

class Bureaucrat
{
public :
    Bureaucrat(std::string name, int grade);
    
    Bureaucrat(Bureaucrat &ori);
    ~Bureaucrat(void);
    Bureaucrat         &operator=(Bureaucrat &ori);
    std::string const   getName(void) const;
    int                 getGrade(void) const;
    void                incrementGrade(int nb);
    void                decrementGrade(int nb);
    void                signAForm(AForm &ori);

    class Exepted : public std::exception
    {
        public : 
            virtual const char * what() const throw();
    };
    class GradeTooHighException : public Bureaucrat::Exepted
    {
        public : 
            virtual const char * what() const throw();
    };
    class GradeTooLowException : public Bureaucrat::Exepted
    {
        public : 
            virtual const char * what() const throw();
    };

protected :
private : 
    std::string const   _name;
    int                 _grade;
};

std::ostream         &operator<<(std::ostream &o, Bureaucrat const &ori);

#endif