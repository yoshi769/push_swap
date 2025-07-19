/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 15:37:47 by yaso              #+#    #+#             */
/*   Updated: 2025/07/19 14:59:18 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strlcatはdestとsrcを結合させる
// destの後ろにsrcを最大（x-dest文字数-1)文字ペーストしてくれる
// 返り値は、dest文字数がsize以上の時は（size＋src文字数）
// sizeよりdestの文字数が小さい時は時は（dest文字数＋src文字数）

#include "../../inc/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (src[i] && (dst_len + i + 1) < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = "World";
// 	char	dest[] = "Hello";

// 	printf("%i\n", ft_strlcat(dest, src, 20));
// 	printf("%s\n", dest);
// }