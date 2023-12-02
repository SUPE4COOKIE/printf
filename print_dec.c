/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 04:18:03 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/12/02 18:27:14 by mwojtasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printint(int n, int count)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		if (ft_printchar('-') == -1)
			return (-1);
		count++;
		nb *= -1;
	}
	if (nb < 10)
	{
		if (ft_printchar(nb + '0') == -1)
			return (-1);
		return (count++);
	}
	else
	{
		ft_printint((int)(nb / 10), count++);
		if (ft_printchar((nb % 10) + '0') == -1)
			return (-1);
	}
}

int	ft_printuint(unsigned int n, int count)
{
	if (n < 10)
		ft_printchar(n + '0');
	else
	{
		ft_printuint((int)(n / 10), count);
		ft_printchar((n % 10) + '0');
	}
}