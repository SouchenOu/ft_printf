/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexax.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:42:47 by souchen           #+#    #+#             */
/*   Updated: 2021/12/05 15:38:13 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print_hexax(unsigned int np, int *cmp)
{
	char	*hexa;

	hexa = "0123456789ABCDEF";
	if (np < 16)
	{
		write(1, &hexa[np], 1);
		*cmp = *cmp + 1;
	}
	else
	{
		ft_print_hexax(np / 16, cmp);
		ft_print_hexax(np % 16, cmp);
	}
}
