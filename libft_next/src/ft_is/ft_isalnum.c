/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 15:34:48 by yaso              #+#    #+#             */
/*   Updated: 2025/07/19 14:59:18 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0'
			&& c <= '9'));
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = "0123456789";
// 	str2 = "0417ismybirthday";
// 	printf("Is '%s' numeric? %d\n", str1, ft_isalnum(str1));
// 	printf("Is '%s' numeric? %d\n", str2, ft_isalnum(str2));
// 	return (0);
// }
