/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 11:46:04 by yaso              #+#    #+#             */
/*   Updated: 2025/06/02 14:35:24 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
char	*ft_itoa(int n);
int		ft_putchar(char c);
int		ft_put_str(char *str);
int		ft_put_nbr(int n);
int		ft_put_percent(void);
int		ft_putnbr_hex(unsigned int n, int is_upper);
int		ft_putptr(void *ptr);
int		ft_put_uint(unsigned int n);
int		ft_putnbr_hex_ull(unsigned long n);

typedef struct s_fmt
{
	int	count;
	int	count_tmp;
	int	i;
}		t_fmt;

#endif