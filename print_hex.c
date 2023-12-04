/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:01:31 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/12/04 16:32:28 by mwojtasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa(unsigned long long n, char *base, int count)
{
	if (n < 10)
	{
		if (ft_printchar(n + '0') == -1)
			return (-1);
		return (count++);
	}
	else
	{
		if (ft_printint((int)(n / 16), count++) == -1)
			return (-1);
		if (ft_printchar((n % 16) + '0') == -1)
			return (-1);
	}
}