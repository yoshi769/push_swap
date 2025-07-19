/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:32:08 by yaso              #+#    #+#             */
/*   Updated: 2025/05/27 19:32:08 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif

# include <fcntl.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_read_and_append_buffer(int fd, char *stash);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *stash, char *buff);
size_t	ft_strlen(char *s);
char	*ft_extract_line(char *stash);
char	*ft_remove_extracted_line(char *stash);

#endif
