/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:25:46 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/09 15:40:49 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>


class Fixed {
private:
	int Number;
	static const int BitsNumber = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &obj);
	Fixed& operator=(const Fixed& obj);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};


#endif
