/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ul_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:25:41 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/26 13:43:26 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_ul_bonus(unsigned long nb)
{
	int	n;

	n = 0;
	if (nb <= 9)
		n += ft_putchar_bonus(nb + '0');
	else
	{
		n += ft_putnbbr(nb / 10);
		n += ft_putnbbr(nb % 10);
	}
	return (n);
}
