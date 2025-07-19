/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 15:35:01 by yaso              #+#    #+#             */
/*   Updated: 2025/07/19 14:59:18 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = "Iamstillabeginer";
// 	str2 = "Ilovelucky7";
// 	// 結果を表示
// 	printf("Is '%s' alphabetic? %d\n", str1, ft_isalpha(str1));
// 	// 1 = true
// 	printf("Is '%s' alphabetic? %d\n", str2, ft_isalpha(str2));
// 	// 0 = false
// 	return (0);
// }