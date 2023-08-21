/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebs <ebs@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 22:56:35 by eali              #+#    #+#             */
/*   Updated: 2023/08/17 20:32:08 by ebs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);

int	printc(int c);
int	printdi(int d);
int	prints(char *s);
int	printu(unsigned int d);
int	printx(unsigned int d);
int	printxx(unsigned int d);
int	printp(unsigned long long s);

#endif