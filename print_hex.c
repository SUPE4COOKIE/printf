/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:01:31 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/12/05 16:48:02 by mwojtasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa(unsigned long long n, char *base, int count)
{
	int tmp;

	if (n > 9)
	{
		tmp = ft_printhexa((n / 16), base, ++count);
		if (base[(n % 16)] == 0)
			printf
			if (ft_printchar(base[(n % 16)]) == -1)
				return (-1);
		return (tmp);
	}
	if (ft_printchar(base[n]) == -1)
		return (-1);
	return (++count);
}