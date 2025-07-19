/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:48:06 by yaso              #+#    #+#             */
/*   Updated: 2025/07/19 14:59:18 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static char	*ft_char(char *s, unsigned int number, long int len)
{
	while (number > 0)
	{
		s[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (s);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*s;
	long int		len;
	unsigned int	number;
	int				sign;

	sign = 1;
	len = ft_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!(s))
		return (NULL);
	s[len--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		number = n * -1;
		s[0] = '-';
	}
	else
		number = n;
	s = ft_char(s, number, len);
	return (s);
}

// int	main(void)
// {
// 	int		num1;
// 	int		num2;
// 	int		num3;
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;

// 	num1 = 12345;
// 	num2 = -6789;
// 	num3 = 0;
// 	str1 = ft_itoa(num1);
// 	str2 = ft_itoa(num2);
// 	str3 = ft_itoa(num3);
// 	printf("ft_itoa(%d) = %s\n", num1, str1);
// 	printf("ft_itoa(%d) = %s\n", num2, str2);
// 	printf("ft_itoa(%d) = %s\n", num3, str3);
// 	// Free allocated memory
// 	free(str1);
// 	free(str2);
// 	free(str3);
// 	return (0);
// }
