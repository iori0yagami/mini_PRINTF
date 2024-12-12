/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 03:40:28 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/26 13:37:15 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	setflag(const char **s)
{
	int	flags;

	flags = 0;
	while (**s == '+' || **s == ' ' || **s == '#')
	{
		if (**s == '+')
			flags |= 1;
		else if (**s == ' ')
			flags |= 2;
		else if (**s == '#')
			flags |= 4;
		(*s)++;
	}
	return (flags);
}

static int	putnint(va_list va, char s, int flags)
{
	int	n;
	int	num;

	n = 0;
	if (s == 'd' || s == 'i')
	{
		num = va_arg(va, int);
		if ((flags & 1) || (flags & 2))
			n += ft_putnbr_bonus(num, &flags);
		else
			n += ft_putnbr_bonus(num, &flags);
	}
	else if (s == 'u')
		n = ft_putnbr_ul_bonus(va_arg(va, unsigned int));
	return (n);
}

static int	puthex(char s, int flags)
{
	int	n;

	n = 0;
	if (s == 'x' || s == 'X')
	{
		if (flags & 4)
		{
			if (s == 'x')
				n += ft_putstr_bonus("0x");
			else
				n += ft_putstr_bonus("0X");
		}
	}
	return (n);
}

static int	check(int flags, va_list va, char s)
{
	int	n;
	int	num;

	n = 0;
	if (s == 'd' || s == 'i' || s == 'u')
		n += putnint(va, s, flags);
	else if (s == 'x' || s == 'X')
	{
		n += puthex(s, flags);
		num = va_arg(va, unsigned int);
		n += ft_putnbr_base_bonus(num, s);
	}
	else if (s == 'p')
		n = ft_putadd_bonus(va_arg(va, unsigned long));
	else if (s == 's')
		n = ft_putstr_bonus(va_arg(va, char *));
	else if (s == 'c')
		n = ft_putchar_bonus((char)va_arg(va, int));
	else
		n = ft_putchar_bonus(s);
	return (n);
}

int	ft_printf(const char *s, ...)
{
	va_list	va;
	int		n;

	n = 0;
	if (write(1, NULL, 0) == -1)
		return (-1);
	va_start(va, s);
	while (*s)
	{
		if (*s == '%')
		{
			if (*(s + 1) == '\0')
			{
				n += ft_putchar_bonus('%');
				break ;
			}
			s++;
			n += check(setflag(&s), va, *s);
		}
		else
			n += ft_putchar_bonus(*s);
		s++;
	}
	va_end(va);
	return (n);
}
