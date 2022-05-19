/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbtr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:13:21 by tcarlott          #+#    #+#             */
/*   Updated: 2021/11/02 18:12:43 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbtr(unsigned int n, int *sum)
{
	unsigned int	num;

	num = n;
	if (num >= 10)
	{
		ft_putnbtr(num / 10, sum);
		ft_putnbtr(num % 10, sum);
	}
	else
		ft_putchar_fd(num + '0', sum);
}
