/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 08:36:23 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/08 10:06:44 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <iostream>
# include <string>
# define BLEU "\e[1;36m"
# define BLEU_2 "\e[1;34m"
# define ROUGE "\e[1;31m"
# define VERT "\e[1;32m"
# define JAUNE "\e[1;33m"
# define VIOLET "\e[1;35m"
# define BLANC "\e[0m"

class Bureaucrate
{
public :
    Bureaucrate(std::string name, int grade);
    Bureaucrate(Bureaucrate &ori);
    ~Bureaucrate(void);
    Bureaucrate         &operator=(Bureaucrate &ori);
    std::string const   getName(void) const;
    int                 getGrade(void) const;

    class Exepted : public std::exception
    {
        public : 
            virtual const char * what() const throw();
    };
    class GradeTooHighException : public Bureaucrate::Exepted
    {
        public : 
            virtual const char * what() const throw();
    };
    class GradeTooLowException : public Bureaucrate::Exepted
    {
        public : 
            virtual const char * what() const throw();
    };

protected :
private : 
    std::string const   _name;
    int                 _grade;
};


#endif