/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 15:52:21 by yaso              #+#    #+#             */
/*   Updated: 2025/07/19 14:59:18 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// #include <stdio.h>

// int	main(void)
// {
// 	// Test the function
// 	char test1 = '5'; // Digit
// 	char test2 = 'a'; // Non-digit
// 	char test3 = '0'; // Digit
// 	char test4 = '9'; // Digit
// 	char test5 = '!'; // Non-digit
// 	printf("ft_isdigit('%c') = %d\n", test1, ft_isdigit(test1));
// 	// Should print 1
// 	printf("ft_isdigit('%c') = %d\n", test2, ft_isdigit(test2));
// 	// Should print 0
// 	printf("ft_isdigit('%c') = %d\n", test3, ft_isdigit(test3));
// 	// Should print 1
// 	printf("ft_isdigit('%c') = %d\n", test4, ft_isdigit(test4));
// 	// Should print 1
// 	printf("ft_isdigit('%c') = %d\n", test5, ft_isdigit(test5));
// 	// Should print 0
// 	return (0);
// }
