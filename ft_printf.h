/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:05:28 by souchen           #+#    #+#             */
/*   Updated: 2021/12/05 23:42:49 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

size_t	ft_putchar(char c);
int		ft_printf(const char *fmt, ...);
size_t	ft_putnbr(int nb);
size_t	ft_putstr(char *s);
void	ft_print_hexa(unsigned int np, int *k);
void	ft_print_hexax(unsigned int np, int *cmp);
size_t	ft_print_point(unsigned long np);
size_t	ft_putu(unsigned int nb);

#endif
