/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:01:46 by adihaj            #+#    #+#             */
/*   Updated: 2022/11/07 22:09:42 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int nbr)
{
	int	r;

	if (nbr > 9)
	{
		print_unsigned(nbr / 10);
		print_unsigned(nbr % 10);
	}
	else
	{
		r = nbr + 48;
		write(1, &r, 1);
	}
	return (nbr_len(nbr));
}
