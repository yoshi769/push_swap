/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 15:34:14 by yaso              #+#    #+#             */
/*   Updated: 2025/07/19 14:59:18 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = nmemb * size;
	if (nmemb == 0 || size == 0)
		total_size = 1;
	else if ((size_t)-1 / nmemb < size)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

// int	main(void)
// {
// 	// Test the custom calloc implementation
// 	int *arr = (int *)ft_calloc(5, sizeof(int));
// 	if (arr == NULL)
// 	{
// 		printf("Memory allocation failed.\n");
// 		return (1);
// 	}

// 	// Verify that the memory is initialized to zero
// 	printf("Allocated array contents:\n");
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}

// 	// Free the allocated memory
// 	free(arr);

// 	return (0);
// }