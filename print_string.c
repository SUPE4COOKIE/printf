/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 04:14:08 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/12/07 05:01:32 by mwojtasi         ###   ########.fr       */
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
	if (!s)
		return (ft_printstr("(null)"));
	if (write(1, s, ft_strlen(s)) == -1)
		return (-1);
	return (ft_strlen(s));
}
