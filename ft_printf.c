/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 03:57:44 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/11/29 04:32:25 by mwojtasi         ###   ########.fr       */
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
	//else if (c == 'p')
	//	count += ft_printptr(va_arg(args, unsigned long long));
	//else if (c == 'd' || c == 'i')
	//	count += ft_printint(va_arg(args, int));
	//else if (c == 'u')
	//	count += ft_printuint(va_arg(args, unsigned int));
	//else if (c == 'x')
	//	count += ft_printlhex(va_arg(args, unsigned int));
	//else if (c == 'X')
	//	count += ft_printuhex(va_arg(args, unsigned int));
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
