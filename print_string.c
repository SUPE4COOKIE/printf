/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 04:14:08 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/12/04 16:30:25 by mwojtasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

int	ft_printstr(char *s)
{
	if (write(1, s, ft_strlen(s)) == -1)
		return (-1);
	return (ft_strlen(s));
}