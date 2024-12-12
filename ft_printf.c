/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:31:59 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/27 08:20:44 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	check(va_list list, const char s)
{
	int	n;

	n = 0;
	if (s == 'd' || s == 'i')
		n = ft_putnbr(va_arg(list, int));
	else if (s == 'u')
		n = ft_putnbr_ul(va_arg(list, unsigned int));
	else if (s == 'x')
		n = ft_putnbr_base(va_arg(list, int), s);
	else if (s == 'X')
		n = ft_putnbr_base(va_arg(list, int), s);
	else if (s == 's')
		n = ft_putstr(va_arg(list, char *));
	else if (s == 'p')
		n = ft_putadd(va_arg(list, unsigned long));
	else if (s == 'c')
		n = ft_putchar(va_arg(list, int));
	else
		n = ft_putchar(s);
	return (n);
}

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int		n;

	if (write(1, NULL, 0) == -1)
		return (-1);
	va_start(list, s);
    va_end(list);
	n = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			n += check(list, *s);
		}
		else
			n += ft_putchar(*s);
		if (*s != '\0')
			s++;
	}
	
	return (n);
}
