/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 02:30:08 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/24 17:19:48 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_putnbr_base_add(unsigned long nb, char c)
{
	char				*base;
	unsigned long		base_len;
	int					n;

	base_len = 16;
	n = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	if (nb < base_len)
		n += ft_putchar(base[nb]);
	else
	{
		n += ft_putnbr_base_add(nb / base_len, c);
		n += ft_putnbr_base_add(nb % base_len, c);
	}
	return (n);
}

int	ft_putadd(unsigned long nb)
{
	int	n;

	n = 0;
	n += ft_putstr("0x");
	n += ft_putnbr_base_add(nb, 'x');
	return (n);
}
