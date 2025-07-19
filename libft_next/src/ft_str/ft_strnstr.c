/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 15:45:47 by yaso              #+#    #+#             */
/*   Updated: 2025/07/19 14:59:18 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (len == 0 && !big)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[j] && big[i + j] == little[j] && i
			+ j < len)
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	const char	*haystack = "Hello, World!";

// 	// Test the function
// 	const char *needle1 = "World"; // Found
// 	const char *needle2 = "Earth"; // Not Found
// 	const char *needle3 = "";      // Empty needle
// 	size_t len = 12;               // Max characters to search
// 	printf("ft_strnstr(\"%s\", \"%s\", %zu) = \"%s\"\n", haystack, needle1, len,
// 		ft_strnstr(haystack, needle1, len));
// 	printf("ft_strnstr(\"%s\", \"%s\", %zu) = \"%s\"\n", haystack, needle2, len,
// 		ft_strnstr(haystack, needle2, len));
// 	printf("ft_strnstr(\"%s\", \"%s\", %zu) = \"%s\"\n", haystack, needle3, len,
// 		ft_strnstr(haystack, needle3, len));
// 	return (0);
// }

// strstr関数は文字列から文字列を検索してその場所のポインタを返してくれる関数です。
// When finder is empty, return str

// char	*ft_strstr(char *str, char *to_find)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	if (to_find[j] == '\0')
// 	{
// 		return (str);
// 	}
// 	while (str[i] != '\0')
// 	{
// 		while (str[i + j] == to_find[j] && str[i + j] != '\0')
// 			j++;
// 		if (to_find[j] == '\0')
// 			return (&str[i]);
// 		i++;
// 		j = 0;
// 	}
// 	return (0);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char	str1[] = "Are you mad??";
// 	char	strF[] = "you";

// 	ft_strstr(str1, strF);
// 	printf("%s\n", ft_strstr(str1, strF));
// 	return (0);
// }