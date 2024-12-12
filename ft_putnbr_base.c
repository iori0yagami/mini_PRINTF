/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 01:51:27 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/22 11:42:19 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_base(unsigned int nb, char c)
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
		n += ft_putchar(base[nb]);
	else
	{
		n += ft_putnbr_base(nb / base_len, c);
		n += ft_putnbr_base(nb % base_len, c);
	}
	return (n);
}
