/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbbr_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:24:28 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/26 13:41:05 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbbr(int nb)
{
	long long	number;
	int			n;

	n = 0;
	number = nb;
	if (number < 0)
	{
		n += ft_putchar_bonus('-');
		number = -number;
	}
	if (number <= 9)
		n += ft_putchar_bonus(number + '0');
	else
	{
		n += ft_putnbbr(number / 10);
		n += ft_putnbbr(number % 10);
	}
	return (n);
}
