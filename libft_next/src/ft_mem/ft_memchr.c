/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 19:31:46 by yaso              #+#    #+#             */
/*   Updated: 2025/07/19 14:59:18 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*memory;
	unsigned char		target;
	size_t				i;

	memory = (const unsigned char *)s;
	target = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (memory[i] == target)
			return ((void *)&memory[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	buffer[] = "Hello, World!";
// 	char	target;
// 	char	*result;

// 	target = 'W';
// 	// Test ft_memchr
// 	result = (char *)ft_memchr(buffer, target, sizeof(buffer));
// 	if (result)
// 		printf("ft_memchr: Found '%c' at position: %ld\n", target, result
// 			- buffer);
// 	else
// 		printf("ft_memchr: '%c' not found.\n", target);
// 	// Test with standard memchr for comparison
// 	result = (char *)memchr(buffer, target, sizeof(buffer));
// 	if (result)
// 		printf("memchr: Found '%c' at position: %ld\n", target, result
// 			- buffer);
// 	else
// 		printf("memchr: '%c' not found.\n", target);
// 	return (0);
// }
