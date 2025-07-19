/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:20:28 by yaso              #+#    #+#             */
/*   Updated: 2025/07/19 15:03:52 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/ft_printf.h"

int	ft_dealing_format(char c, va_list *ap);

int	ft_printf(const char *param, ...)
{
	va_list	ap;
	t_fmt	f;

	if (param == NULL)
		return (-1);
	va_start(ap, param);
	f.count = 0;
	f.i = -1;
	while (param[++f.i])
	{
		if (param[f.i] == '%')
		{
			if (param[++f.i] == '\0')
				return (va_end(ap), -1);
			f.count_tmp = ft_dealing_format(param[f.i], &ap);
		}
		else
			f.count_tmp = ft_putchar(param[f.i]);
		if (f.count_tmp < 0)
			return (va_end(ap), -1);
		f.count += f.count_tmp;
	}
	va_end(ap);
	return (f.count);
}

int	ft_dealing_format(char c, va_list *ap)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(*ap, int));
	else if (c == 's')
		len += ft_put_str(va_arg(*ap, char *));
	else if (c == 'd' || c == 'i')
		len += ft_put_nbr(va_arg(*ap, int));
	else if (c == 'u')
		len += ft_put_uint(va_arg(*ap, unsigned int));
	else if (c == 'x' || c == 'X')
		len += ft_putnbr_hex(va_arg(*ap, unsigned int), c == 'X');
	else if (c == 'p')
		len += ft_putptr(va_arg(*ap, void *));
	else if (c == '%')
		len += ft_put_percent();
	else
		return (-1);
	return (len);
}
