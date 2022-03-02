/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:20:25 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/02 07:36:19 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed 
{
public : 
	Fixed(void);
	Fixed(int const new_nb);
	Fixed(float const new_nb);
	Fixed(Fixed const & ori);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void)const;
	int		toInt(void)const;
	static Fixed &min(Fixed &n1, Fixed &n2);
	static Fixed &max(Fixed &n1, Fixed &n2);
	static Fixed max(const Fixed &n1, const Fixed &n2);
	static Fixed min(const Fixed &n1, const Fixed &n2);
	Fixed & operator=(Fixed const & ori);
	int operator>(Fixed const & f1) const;
	int operator<(Fixed const & f1) const;
	int operator>=(Fixed const & f1) const;
	int operator<=(Fixed const & f1) const;
	int operator==(Fixed const & f1) const;
	int operator!=(Fixed const & f1) const;
	Fixed operator+(Fixed const & f1) const;
	Fixed operator-(Fixed const & f1) const;
	Fixed operator*(Fixed const & f1) const;
	Fixed operator/(Fixed const & f1) const;
	Fixed & operator++(void);
	Fixed operator++(int);
	Fixed & operator--(void);
	Fixed operator--(int);
private :
	int					_nb;
	static const int	_nb_bits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &ori);
