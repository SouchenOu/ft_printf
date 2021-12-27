/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:03:58 by souchen           #+#    #+#             */
/*   Updated: 2021/12/07 16:17:10 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	func(const char *fmt, va_list *ap, int *i, int *cmp)
{
	if (fmt[*i] == 's')
		*cmp = *cmp + ft_putstr(va_arg(*ap, char *));
	else if (fmt[*i] == 'd' || fmt[*i] == 'i')
		*cmp = *cmp + ft_putnbr(va_arg(*ap, int));
	else if (fmt[*i] == 'u')
		*cmp = *cmp + ft_putu(va_arg(*ap, unsigned int));
	else if (fmt[*i] == 'c')
		*cmp = *cmp + ft_putchar(va_arg(*ap, int));
	else if (fmt[*i] == 'x')
		ft_print_hexa(va_arg(*ap, unsigned int), *(&cmp));
	else if (fmt[*i] == 'X')
		ft_print_hexax(va_arg(*ap, unsigned int), *(&cmp));
	else if (fmt[*i] == 'p')
	{
		write(1, "0x", 2);
		*cmp = *cmp + ft_print_point(va_arg(*ap, unsigned long));
		*cmp = *cmp + 2;
	}
	else if (fmt[*i] == '%')
		*cmp = *cmp + write(1, "%%", 1);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		i;
	int		cmp;

	i = -1;
	cmp = 0;
	va_start(ap, fmt);
	while (fmt[++i])
	{
		if (fmt[i] == '%')
		{
			i++;
			func(fmt, &ap, &i, &cmp);
		}
		else
			cmp = cmp + write(1, &fmt[i], 1);
	}
	va_end(ap);
	return (cmp);
}
