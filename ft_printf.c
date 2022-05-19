/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:39:42 by tcarlott          #+#    #+#             */
/*   Updated: 2021/11/02 18:16:11 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	function(va_list arg, char c, int *sum)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(arg, int), sum);
	else if (c == 's')
		ft_putstr_fd(va_arg(arg, char *), sum);
	else if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(arg, int), sum);
	else if (c == '%')
		ft_putchar_fd('%', sum);
	else if (c == 'u')
		ft_putnbtr(va_arg(arg, unsigned int), sum);
	else if (c == 'p')
		ft_putpointer(va_arg(arg, void *), sum);
	else if (c == 'x')
		ft_put_lowx(va_arg(arg, unsigned int), sum);
	else if (c == 'X')
		ft_put_upx(va_arg(arg, unsigned int), sum);
}

int	ft_printf(const char *s, ...)
{
	va_list		argptr;
	int			i;
	int			sum;

	i = 0;
	sum = 0;
	if (!s)
		return (0);
	va_start(argptr, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			function(argptr, s[i], &sum);
		}
		else
			ft_putchar_fd(s[i], &sum);
		i++;
	}
	va_end(argptr);
	return (sum);
}
