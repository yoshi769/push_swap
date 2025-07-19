/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:20:04 by yaso              #+#    #+#             */
/*   Updated: 2025/07/19 15:03:52 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_put_str(char *str)
{
	int	len;
	int	result;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = 0;
	result = 0;
	while (str[len] != '\0')
	{
		result += ft_putchar(str[len]);
		if (result == -1)
			return (-1);
		len++;
	}
	return (len);
}

int	ft_put_nbr(int n)
{
	int		len;
	char	*str;

	str = ft_itoa(n);
	if (!str)
		return (-1);
	len = ft_put_str(str);
	free(str);
	return (len);
}

int	ft_put_percent(void)
{
	write(1, "%", 1);
	return (1);
}
