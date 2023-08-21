/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebs <ebs@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:16:48 by eali              #+#    #+#             */
/*   Updated: 2023/08/17 22:08:37 by ebs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printxx(unsigned int d)
{
	char	*xx;
	int		c;

	c = 0;
	xx = "0123456789ABCDEF";
	if (d >= 16)
	{
		c += printxx(d / 16);
		c += printxx(d % 16);
	}
	else
	{
		c += printc(xx[d]);
	}
	return (c);
}
//////////////////////////////////////////////////////////////////////////

int	printx(unsigned int d)
{
	char	*x;
	int		c;

	c = 0;
	x = "0123456789abcdef";
	if (d >= 16)
	{
		c += printx(d / 16);
		c += printx(d % 16);
	}
	else
	{
		c += printc(x[d]);
	}
	return (c);
}
//////////////////////////////////////////////////////////////////////////

int	printp(unsigned long long d)
{
	char	*x;
	int		c;

	c = 0;
	x = "0123456789abcdef";
	if (d >= 16)
	{
		c += printp(d / 16);
		c += printp(d % 16);
	}
	else
	{
		c += printc(x[d]);
	}
	return (c);
}
//////////////////////////////////////////////////////////////////////////
