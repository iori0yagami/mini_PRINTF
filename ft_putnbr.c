/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:24:28 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/19 04:34:14 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr(int nb)
{
	long long	number;
	int			n;

	n = 0;
	number = nb;
	if (number < 0)
	{
		n += ft_putchar('-');
		number = -number;
	}
	if (number <= 9)
		n += ft_putchar(number + '0');
	else
	{
		n += ft_putnbr(number / 10);
		n += ft_putnbr(number % 10);
	}
	return (n);
}
