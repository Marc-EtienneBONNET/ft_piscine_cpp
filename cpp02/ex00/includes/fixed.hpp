/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:20:25 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/01 14:29:29 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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