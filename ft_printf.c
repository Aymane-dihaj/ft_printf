/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:16:48 by adihaj            #+#    #+#             */
/*   Updated: 2023/01/29 16:31:31 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_sp(va_list ptr, char sp)
{
	int	count;

	count = 0;
	if (sp == 'c')
		count += print_char(va_arg(ptr, int));
	if (sp == 's')
		count += print_str(va_arg(ptr, char *));
	if (sp == 'd' || sp == 'i')
		count += print_nbr(va_arg(ptr, int));
	if (sp == 'x' || sp == 'X')
		count += print_hexa(sp, va_arg(ptr, unsigned));
	if (sp == 'u')
		count += print_unsigned(va_arg(ptr, unsigned));
	if (sp == 'p')
		count += print_address((long)va_arg(ptr, void*));
	if (sp == '%')
		count += print_char('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		length;
	int		i;

	va_start(args, format);
	i = 0;
	length = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			length += check_sp(args, format[i]);
		}
		else
			length += print_char(format[i]);
		i++;
	}
	va_end(args);
	return (length);
}

