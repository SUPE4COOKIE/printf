/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 03:57:44 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/12/02 18:23:47 by mwojtasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
static int	ft_printall(const char c, va_list args)
{
	int	count;
	
	count = 0;
	if (c == 'c')
		count += ft_printchar(va_arg(args, int));
	else if (c == 's')
		count += ft_printstr(va_arg(args, char *));
	else if (c == 'p')
		count += ft_printptr(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		count += ft_printint(va_arg(args, int), 0);
	else if (c == 'u')
		count += ft_printuint(va_arg(args, unsigned int), 0);
	else if (c == 'x')
		count += ft_printhexa(va_arg(args, unsigned int), LOW_HEXA, 0);
	else if (c == 'X')
		count += ft_printhexa(va_arg(args, unsigned int), UP_HEXA, 0);
	else if (c == '%')
		count += ft_printchar('%');
	return (count);
}

int ft_printf(const char *s, ...)
{
	int	count;
	int	i;
	va_list	args;

	va_start(args, s);
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
			count += ft_printall(s[++i], args);
		else
			ft_printchar((int)s[i]);
		i++;
	}
	va_end(args);
	return (count);
}

int main(void)
{
	ft_printf("%x : %d", -42, 42);
}
