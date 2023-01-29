/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:53:01 by adihaj            #+#    #+#             */
/*   Updated: 2022/11/07 22:09:02 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa(char b, unsigned long i)
{
	char	*hexa;
	int		ln;

	ln = 0;
	if (b == 'x')
		hexa = "0123456789abcdef";
	else
		hexa = "0123456789ABCDEF";
	if (i >= 16)
		ln += print_hexa(b, i / 16);
	ln += print_char(hexa[i % 16]);
	return (ln);
}
