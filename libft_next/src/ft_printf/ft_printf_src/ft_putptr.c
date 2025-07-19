/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:27:22 by yaso              #+#    #+#             */
/*   Updated: 2025/07/19 15:03:52 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/ft_printf.h"

int	ft_putptr(void *ptr)
{
	int			len;
	uintptr_t	addr;

	if (!ptr)
		return (ft_put_str("(nil)"));
	len = 0;
	addr = (unsigned long)ptr;
	len += ft_put_str("0x");
	len += ft_putnbr_hex_ull(addr);
	return (len);
}
