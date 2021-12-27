/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:56:57 by souchen           #+#    #+#             */
/*   Updated: 2021/12/05 15:50:36 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

size_t	ft_putnbr(int nb)
{
	long	a;
	size_t	cmp;

	cmp = 0;
	a = nb;
	if (a < 0)
	{
		ft_putchar('-');
		a = a * -1;
		cmp += 1;
	}
	if (a <= 9)
	{
		ft_putchar(a + '0');
		cmp += 1;
	}
	if (a >= 10)
	{
		cmp = cmp + ft_putnbr(a / 10);
		a = a % 10;
		ft_putchar(a + '0');
		cmp += 1;
	}
	return (cmp);
}
