/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 15:38:37 by yaso              #+#    #+#             */
/*   Updated: 2025/07/19 14:59:18 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 文字列が異なっていない場合でも、文字列の長さが異なるときにその違いを考慮する

#include "../../inc/libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	if (len == 0)
		return (0);
	while (i < len - 1)
	{
		c1 = (unsigned char)str1[i];
		c2 = (unsigned char)str2[i];
		if (c1 == '\0' || c2 == '\0' || c1 != c2)
			break ;
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s1[] = "abcdea";
// 	char	s2[] = "abcde";
// 	char	s3[] = "abcdea";
// 	char	s4[] = "abcde";
// 	int		a;
// 	int		b;

// 	a = strncmp(s1, s2, 0);
// 	printf("   strncmp,%d\n", a);
// 	b = ft_strncmp(s3, s4, 0);
// 	printf("ft_strncmp,%d", b);
// 	return (0);
// }