/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:20:25 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/02 20:49:36 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_DEFINE_INCLUDE_H
# define MY_DEFINE_INCLUDE_H
# include <iostream>
# include <string>
#include "Fixed.hpp"

# define BLEU "\e[1;36m"
# define BLEU_2 "\e[1;34m"
# define ROUGE "\e[1;31m"
# define VERT "\e[1;32m"
# define JAUNE "\e[1;33m"
# define VIOLET "\e[1;35m"
# define BLANC "\e[0m"

class Fixed
{
public :
	Fixed(void);
	Fixed(int	new_nb);
	Fixed(Fixed const & ori);
	~Fixed(void);
	Fixed & operator=(Fixed const & ori);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private :
	int					_nb;
	static const int	_nb_bits = 8;
};
#endif