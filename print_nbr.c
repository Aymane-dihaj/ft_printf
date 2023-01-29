/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:42:57 by adihaj            #+#    #+#             */
/*   Updated: 2022/11/14 13:55:11 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int nb)
{
	int	c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		print_nbr(nb * -1);
	}
	else if (nb > 9)
	{
		print_nbr(nb / 10);
		print_nbr(nb % 10);
	}
	else
	{
		c = nb + 48;
		write(1, &c, 1);
	}
	return (nbr_len(nb));
}

// int main()
// {
// 	int i = 0;
// 	i = print_nbr(7382);
// 	printf("\n%d", i);
// }