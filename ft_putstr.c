/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:25:02 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/24 17:00:25 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putstr(const char *s)
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
		res = ft_putchar(s[i]);
		if (res == -1)
			return (-1);
		size += res;
		i++;
	}
	return (size);
}
