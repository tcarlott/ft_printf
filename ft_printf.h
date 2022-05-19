/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:40:14 by tcarlott          #+#    #+#             */
/*   Updated: 2021/11/02 18:29:31 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *s, ...);
void	function(va_list arg, char c, int *sum);
void	ft_putstr_fd(char *s, int *sum);
void	ft_putchar_fd(char c, int *str);
void	ft_putnbr_fd(int n, int *sum);
void	ft_putnbtr(unsigned int n, int *sum);
void	ft_pointer2(unsigned long nb, int *sum);
void	ft_putpointer(void *arg, int *sum);
void	ft_put_lowx(unsigned int nb, int *sum);
void	ft_put_upx(unsigned int nb, int *sum);

#endif
