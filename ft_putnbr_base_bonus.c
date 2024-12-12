/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 01:51:27 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/26 13:32:54 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_base_bonus(unsigned int nb, char c)
{
	char			*base;
	unsigned int	base_len;
	int				n;

	n = 0;
	base_len = 16;
	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (nb < base_len)
		n += ft_putchar_bonus(base[nb]);
	else
	{
		n += ft_putnbr_base_bonus(nb / base_len, c);
		n += ft_putnbr_base_bonus(nb % base_len, c);
	}
	return (n);
}
