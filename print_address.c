/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:10:30 by adihaj            #+#    #+#             */
/*   Updated: 2022/11/08 15:15:03 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_address(unsigned long int n)
{
	int	len;

	len = 0;
	write(1, "0x", 2);
	len += print_hexa('x', n);
	return (len + 2);
}
