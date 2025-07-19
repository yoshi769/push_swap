/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:31:54 by yaso              #+#    #+#             */
/*   Updated: 2025/05/27 19:31:54 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/get_next_line.h"

// #include <stdio.h>

char	*ft_read_and_append_buffer(int fd, char *stash);

char	*get_next_line(int fd)
{
	static char	*stash[OPEN_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	stash[fd] = ft_read_and_append_buffer(fd, stash[fd]);
	if (!stash[fd])
		return (NULL);
	line = ft_extract_line(stash[fd]);
	stash[fd] = ft_remove_extracted_line(stash[fd]);
	return (line);
}

// Asigning stash with local variable buff
char	*ft_read_and_append_buffer(int fd, char *stash)
{
	char	*buff;
	int		rd_bytes;

	buff = malloc(((size_t)BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	rd_bytes = 1;
	while (!ft_strchr(stash, '\n') && rd_bytes > 0)
	{
		rd_bytes = read(fd, buff, BUFFER_SIZE);
		if (rd_bytes <= 0)
			break ;
		buff[rd_bytes] = '\0';
		stash = ft_strjoin(stash, buff);
		if (!stash)
			break ;
	}
	free(buff);
	if (rd_bytes < 0 || (!stash || *stash == '\0'))
		return (free(stash), NULL);
	return (stash);
}

// int	main(void)
// {
// 	char *line;
// 	int j;
// 	int fd1;
// 	int fd2;

// 	fd1 = open("tests/test.txt", O_RDONLY);
// 	fd2 = open("tests/test2.txt", O_RDONLY);
// 	j = 1;

// 	while ((line = get_next_line(fd1)) != NULL)
// 	{
// 		printf("line [%02d]: %s", j, line);
// 		free(line);
// 		j++;
// 	}
// 	j = 1;
// 	while ((line = get_next_line(fd2)) != NULL)
// 	{
// 		printf("line [%02d]: %s", j, line);
// 		free(line);
// 		j++;
// 	}
// 	close(fd1);
// 	close(fd2);
// 	return (0);
// }
