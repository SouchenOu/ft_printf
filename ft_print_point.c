/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:01:06 by souchen           #+#    #+#             */
/*   Updated: 2021/12/05 15:39:51 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

size_t	ft_print_point(unsigned long np)
{
	char	*point;
	size_t	cmp;

	cmp = 0;
	point = "0123456789abcdef";
	if (np < 16)
	{
		write(1, &point[np], 1);
		cmp++;
	}
	else
	{
		cmp = cmp + ft_print_point(np / 16);
		cmp = cmp + ft_print_point(np % 16);
	}
	return (cmp);
}
