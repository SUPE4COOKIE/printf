/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 04:18:03 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/11/29 04:19:08 by mwojtasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_printint(int n, int fd)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
		write(fd, &(char){nb + '0'}, 1);
	else
	{
		ft_putnbr_fd((int)(nb / 10), fd);
		write(fd, &(char){(nb % 10) + '0'}, 1);
	}
}