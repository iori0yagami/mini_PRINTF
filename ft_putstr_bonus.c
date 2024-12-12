/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:25:02 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/26 13:37:39 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putstr_bonus(const char *s)
{
	int	i;
	int	size;
	int	res;

	res = 0;
	size = 0;
	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[i])
	{
		res = ft_putchar_bonus(s[i]);
		if (res == -1)
			return (-1);
		size += res;
		i++;
	}
	return (size);
}
