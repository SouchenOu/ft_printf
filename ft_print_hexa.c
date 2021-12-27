/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 00:09:00 by souchen           #+#    #+#             */
/*   Updated: 2021/12/06 16:53:22 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print_hexa(unsigned int np, int *k)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (np < 16)
	{
		write(1, &hex[np], 1);
		*k = *k + 1;
	}
	else
	{
		ft_print_hexa(np / 16, k);
		ft_print_hexa(np % 16, k);
	}
}
