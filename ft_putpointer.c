/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:41:32 by tcarlott          #+#    #+#             */
/*   Updated: 2021/11/02 18:30:33 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer2(unsigned long nb, int *sum)
{
	if (nb > 15)
		ft_pointer2(nb / 16, sum);
	if ((nb % 16) <= 9)
		ft_putchar_fd((nb % 16) + 48, sum);
	else
		ft_putchar_fd((nb % 16) + 87, sum);
}

void	ft_putpointer(void *arg, int *sum)
{
	write(1, "0x", 2);
	*sum = *sum + 2;
	ft_pointer2((unsigned long)arg, sum);
}

void	ft_put_lowx(unsigned int nb, int *sum)
{
	if (nb > 15)
		ft_put_lowx(nb / 16, sum);
	if ((nb % 16) <= 9)
		ft_putchar_fd((nb % 16) + 48, sum);
	else
		ft_putchar_fd((nb % 16) + 87, sum);
}

void	ft_put_upx(unsigned int nb, int *sum)
{
	if (nb > 15)
		ft_put_upx(nb / 16, sum);
	if ((nb % 16) <= 9)
		ft_putchar_fd((nb % 16) + 48, sum);
	else
		ft_putchar_fd((nb % 16) + 55, sum);
}
