/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 16:31:22 by yaso              #+#    #+#             */
/*   Updated: 2025/07/19 14:59:18 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	target;

	target = (char)c;
	while (*str)
	{
		if (*str == target)
			return ((char *)str);
		str++;
	}
	if (target == '\0')
		return ((char *)str);
	return (NULL);
}
