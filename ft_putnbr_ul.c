/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:25:41 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/23 09:55:52 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_ul(unsigned long nb)
{
	int	n;

	n = 0;
	if (nb <= 9)
		n += ft_putchar(nb + '0');
	else
	{
		n += ft_putnbr(nb / 10);
		n += ft_putnbr(nb % 10);
	}
	return (n);
}
