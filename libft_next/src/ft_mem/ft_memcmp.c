/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 19:32:11 by yaso              #+#    #+#             */
/*   Updated: 2025/07/19 14:59:18 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*source1;
	const unsigned char	*source2;

	source1 = (const unsigned char *)s1;
	source2 = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*source1 != *source2)
			return (*source1 - *source2);
		source1++;
		source2++;
		n--;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	buffer1[] = "Hello, World!";
// 	int		result;

// 	char buffer2[] = "Hello, Word!"; // Slight difference
// 	// Test ft_memcmp
// 	result = ft_memcmp(buffer1, buffer2, 13);
// 	if (result == 0)
// 		printf("ft_memcmp: The memory blocks are equal.\n");
// 	else
// 		printf("ft_memcmp: The memory blocks are different. Result = %d\n",
// 			result);
// 	// Test with standard memcmp for comparison
// 	result = memcmp(buffer1, buffer2, 13);
// 	if (result == 0)
// 		printf("memcmp: The memory blocks are equal.\n");
// 	else
// 		printf("memcmp: The memory blocks are different. Result = %d\n",
// 			result);
// 	return (0);
// }
