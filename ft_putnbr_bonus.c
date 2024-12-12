/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:24:28 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/26 13:42:14 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_bonus(int nb, int *flags)
{
	int	n;
	int	abs_nb;

	n = 0;
	abs_nb = nb;
	if (*flags & 1)
	{
		if (nb >= 0)
			n += ft_putchar_bonus('+');
	}
	else if (*flags & 2)
	{
		if (nb >= 0)
			n += ft_putchar_bonus(' ');
	}
	n += ft_putnbbr(abs_nb);
	return (n);
}
