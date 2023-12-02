/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:01:31 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/12/02 18:20:05 by mwojtasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa(unsigned long long n, char *base, int count)
{
	if (n < 10)
	{
		ft_printchar(base[n]);
		return (count++);
	}
	else
	{
		ft_printhexa((int)(n / 16), base, count++);
		ft_printchar(base[(n % 16)]);
	}
}