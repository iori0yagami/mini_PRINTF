/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:32:24 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/27 08:00:04 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H  
# define PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putstr(const char *s);
int		ft_putnbr(int nb);
int		ft_putnbr_ul(unsigned long n);
int		ft_putadd(unsigned long nb);
int		ft_putnbr_base(unsigned int n, char c);

int		ft_putnbr_bonus(int nb, int *flags);
int		ft_putstr_bonus(const char *s);
int		ft_putnbr_ul_bonus(unsigned long nb);
int		ft_putnbr_base_bonus(unsigned int nb, char c);
int		ft_putchar_bonus(char c);
int		ft_putadd_bonus(unsigned long nb);
int		ft_putnbbr(int nb);

#endif
