/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:17:16 by adihaj            #+#    #+#             */
/*   Updated: 2022/11/14 13:49:07 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	print_char(char c);
int	print_str(const char *str);
int	nbr_len(long n);
int	print_hexa(char b, unsigned long i);
int	print_nbr(int nb);
int	print_unsigned(unsigned int nbr);
int	print_address(unsigned long int n);

#endif